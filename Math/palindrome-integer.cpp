// https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
  if (A < 0) return 0;
  int B = 0, tmp = A;
  while (tmp) B *= 10, B += tmp % 10, tmp /= 10;
  return A == B;
}
