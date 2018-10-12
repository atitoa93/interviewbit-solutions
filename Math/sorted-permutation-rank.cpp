// https://www.interviewbit.com/problems/sorted-permutation-rank/

int fact(int n, int m) {
  int ret = 1;
  for (int i = 1; i <= n; ++i) {
    ret *= i;
    ret %= m;
  }
  return ret;
}

int Solution::findRank(string A) {
  int ret = 0, m = 1000003;
  string B = A;
  sort(B.begin(), B.end());
  for (int i = 0; i < A.size(); ++i) {
    int idx = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
    B.erase(idx, 1);
    ret += idx * fact(A.size() - i - 1, m);
    ret %= m;
  }
  return ret + 1;
}
