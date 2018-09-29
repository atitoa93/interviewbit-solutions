// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
  if (A.empty()) {
    return 0;
  }
  
  int ret = A[0], cur = 0;
  
  for (int i = 0; i < A.size(); ++i) {
    cur += A[i];
    ret = max(ret, cur);
    cur = max(cur, 0);
  }
  
  return ret;
}
