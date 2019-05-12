// https://www.interviewbit.com/problems/min-jumps-array/

int Solution::jump(vector<int> &A) {
  int n = A.size();
  if (n <= 1) return 0;

  int ret = 1;
  int reachablePos = A[0];
  int maxReachablePos = A[0];
  for (int i = 1; i <= reachablePos; ++i) {
    if (i == n - 1) return ret;
    maxReachablePos = max(maxReachablePos, A[i] + i);
    if (i == reachablePos) {
      reachablePos = maxReachablePos;
      ++ret;
    }
  }
  
  return -1;
}
