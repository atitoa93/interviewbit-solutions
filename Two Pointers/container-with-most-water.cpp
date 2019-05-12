// https://www.interviewbit.com/problems/container-with-most-water/

int Solution::maxArea(vector<int> &A) {
  int i = 0, j = A.size() - 1, ret = min(A[i], A[j]) * (j - i);
  while (i < j) {
    if (A[i] < A[j]) ++i;
    else --j;
    ret = max(ret, (j - i) * min(A[i], A[j]));
  }
  return ret;
}
