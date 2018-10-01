// https://www.interviewbit.com/problems/first-missing-integer/

int Solution::firstMissingPositive(vector<int> &A) {
  int cnt = 0;
  for (int i = 0; i < A.size(); ++i) {
    cnt += A[i] > 0;
  }
  
  int last = A.size() - 1;
  for (int i = 0; i < last; ++i) {
    if (A[i] <= 0) {
      while (last >= 0 && A[last] <= 0) --last;
      if (last >= 0) swap(A[i], A[last]);
    }
  }
  
  for (int i = 0; i < cnt; ++i) {
    if (abs(A[i]) > cnt) continue;
    
    int sign = A[i] < 0 ? -1 : 1;
    
    if (A[sign * A[i] - 1] > 0)
      A[sign * A[i] - 1] *= -1;
  }
  
  int ret = 0;
  for (int i = 0; i < cnt; ++i) {
    if (A[i] > 0) {
      ret = i + 1;
      break;
    }
  }
  
  if (!ret) ret = cnt + 1;
  
  return ret;
}
