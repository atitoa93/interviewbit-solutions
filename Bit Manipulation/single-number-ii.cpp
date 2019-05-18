// https://www.interviewbit.com/problems/single-number-ii/

int Solution::singleNumber(const vector<int> &A) {
  int ret = 0;
  for (int i = 0; i < 32; ++i) {
    int cnt = 0;
    for (int j = 0; j < A.size(); ++j) {
      cnt += !!((1 << i) & A[j]);
    }
    if (cnt % 3) ret |= 1 << i;
  }
  return ret;
}
