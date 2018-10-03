// https://www.interviewbit.com/problems/min-jumps-array/

int Solution::jump(vector<int> &A) {
  int ret = 0;
  
  for (int i = A.size() - 1; i > 0; --i) {
    int farthest = -1;
    for (int j = i - 1; j >= 0; --j) {
      if (A[j] + j >= i) {
        farthest = j;
      }
    }
    if (~farthest) {
      i = farthest + 1;
      ret += 1;
    } else {
      ret = -1;
      break;
    }
  }
  
  return ret;
}
