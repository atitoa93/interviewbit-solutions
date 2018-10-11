// https://www.interviewbit.com/problems/largest-coprime-divisor/

int gcd(int n, int m) {
  while (m) {
    n %= m;
    swap(n, m);
  }
  return n;
}

int Solution::cpFact(int A, int B) {
  int x;
  while ((x = gcd(A, B)) > 1) A /= x;
  return A;
}
