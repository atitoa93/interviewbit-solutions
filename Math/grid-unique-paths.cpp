// https://www.interviewbit.com/problems/grid-unique-paths/

int nCr(int n, int r) {
  int ret = 1;
  for (int i = 1; i <= r; ++i) {
     ret *= n - i + 1;
     ret /= i;
  }
  return ret;
}

int Solution::uniquePaths(int A, int B) {
  return nCr(A + B - 2, min(A, B) - 1);
}
