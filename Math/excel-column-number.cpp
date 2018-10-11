// https://www.interviewbit.com/problems/excel-column-number/

int Solution::titleToNumber(string A) {
  int ret = 0;
  for (int i = 0; i < A.size(); ++i) {
    ret = 26 * ret + (A[i] - 'A' + 1);
  }
  return ret;
}
