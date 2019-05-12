// https://www.interviewbit.com/problems/3-sum-zero/

vector<vector<int> > Solution::threeSum(vector<int> &A) {
  sort(A.begin(), A.end());
  vector <vector <int> > ret;
  for (int i = 0; i < int(A.size()) - 2; ++i) {
    if (i && A[i] == A[i - 1]) continue;
    int l = i + 1, r = A.size() - 1;
    while (l < r) {
      int cur = A[i] + A[l] + A[r];
      if (!cur) ret.push_back({ A[i], A[l], A[r] });
      
      if (cur > 0) --r;
      else if (cur < 0) ++l;
      else {
        ++l;
        while (l < r && A[l] == A[l - 1]) ++l;
      }
    }
  }

  return ret;
}
