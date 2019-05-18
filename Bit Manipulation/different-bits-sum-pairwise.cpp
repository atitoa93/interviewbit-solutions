// https://www.interviewbit.com/problems/different-bits-sum-pairwise/

int Solution::cntBits(vector<int> &A) {
  int ret = 0, mod = 1e9 + 7;
  for (int i = 0; i < 32; ++i) {
    int cnt = 0;
    for (int j = 0; j < A.size(); ++j) {
      cnt += (A[j] >> i) & 1;
    }
    ret = (ret + (2ll * cnt * (A.size() - cnt)) % mod) % mod;
  }
  return ret;
}
