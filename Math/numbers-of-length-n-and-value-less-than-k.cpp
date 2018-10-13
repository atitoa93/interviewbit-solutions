// https://www.interviewbit.com/problems/numbers-of-length-n-and-value-less-than-k/

int BB;
vector <int> dp;

int bt(vector <int> &A, int B, int C, int V) {
  if (!B) return V < C;
  if (V >= C) return 0;
  int &ret = dp[V];
  if (~ret) return ret;
  ret = 0;
  for (int i = 0; i < A.size(); ++i) {
    if (!V && B < BB) continue;
    ret += bt(A, B - 1, C, V * 10 + A[i]);
  }
  return ret;
}

int len(int n) {
  int ret = 0;
  while (n) ++ret, n /= 10;
  return ret + (!ret && !n);
}

int Solution::solve(vector<int> &A, int B, int C) {
  if (!A.size() || B > len(C)) return 0;
  BB = B;
  dp.clear();
  dp.resize(C, -1);
  return bt(A, B, C, 0);
}
