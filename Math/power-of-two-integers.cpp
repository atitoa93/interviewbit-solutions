// https://www.interviewbit.com/problems/power-of-two-integers/

int Solution::isPower(int A) {
  if (A == 1) return 1;
  for (int i = 2; i * i <= A; ++i) {
    if (A % i == 0) {
      int t = A;
      while (t > 1 && t % i == 0) t /= i;
      if (t == 1) return 1;
    }
  }
  return 0;
}
