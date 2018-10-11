// https://www.interviewbit.com/problems/greatest-common-divisor/

int Solution::gcd(int A, int B) {
  while (B) {
    A %= B;
    swap(A, B);
  }
  return A;
}
