// https://www.interviewbit.com/problems/max-distance/

int Solution::maximumGap(const vector<int> &A) {
  vector <pair <int, int>> B;
  for (int i = 0; i < A.size(); ++i) {
    B.push_back({ A[i], i });
  }
  sort(B.begin(), B.end());
  int ret = 0, maxi = 0;
  for (int i = B.size() - 1; i >= 0; --i) {
    maxi = max(maxi, B[i].second);
    ret = max(ret, maxi - B[i].second);
  }
  return ret;
}
