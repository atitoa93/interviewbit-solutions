// https://www.interviewbit.com/problems/n3-repeat-number/

int Solution::repeatedNumber(const vector<int> &A) {
  int n1 = INT_MAX, n2 = INT_MAX, c1 = 0, c2 = 0;
  for (int i = 0; i < A.size(); ++i) {
    if (n1 == A[i]) ++c1;
    else if (n2 == A[i]) ++c2;
    else if (!c1) n1 = A[i], ++c1;
    else if (!c2) n2 = A[i], ++c2;
    else --c1, --c2;
  }
  
  c1 = c2 = 0;
  for (int i = 0; i < A.size(); ++i) {
    c1 += A[i] == n1;
    c2 += A[i] == n2;
  }
  
  if (c1 > A.size() / 3) return n1;
  if (c2 > A.size() / 3) return n2;
  return -1;
}
