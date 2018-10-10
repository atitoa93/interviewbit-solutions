// https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/

int Solution::hammingDistance(const vector<int> &A) {
  int ret = 0;
  for (int b = 0; b < 32; ++b) {
    int ones = 0;
    for (int i = 0; i < A.size(); ++i) {
      ones += !!((1 << b) & A[i]);
    }
    ret += (ones * (A.size() - ones)) % 1000000007;
    ret %= 1000000007;
  }
  return (ret << 1) % 1000000007;
}
