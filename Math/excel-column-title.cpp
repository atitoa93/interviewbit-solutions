// https://www.interviewbit.com/problems/excel-column-title/

string Solution::convertToTitle(int A) {
  string ret = "";
  while (A) {
    ret = char('A' + (A - 1) % 26) + ret;
    A -= 1, A /= 26;
  }
  return ret;
}
