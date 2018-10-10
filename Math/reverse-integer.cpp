// https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int A) {
  int sign = 1;
  long long ret = 0;
  if (A < 0) A *= -1, sign = -1;
  while (A) ret *= 10, ret += A % 10, A /= 10;
  ret *= sign;
  if (ret > INT_MAX || ret < INT_MIN) return 0;
  return ret;
}
