// https://www.interviewbit.com/problems/find-duplicate-in-array/

int Solution::repeatedNumber(const vector<int> &A) {
  int s = A[0], f = A[A[0]];
  while (s != f) s = A[s], f = A[A[f]];
  s = 0;
  while (s != f) s = A[s], f = A[f];
  return s;
}
