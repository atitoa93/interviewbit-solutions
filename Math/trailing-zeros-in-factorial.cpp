// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

int Solution::trailingZeroes(int A) {
  int ret = 0, p = 5;
  while (p <= A) {
    ret += A / p;
    p *= 5;
  }
  return ret;
}
