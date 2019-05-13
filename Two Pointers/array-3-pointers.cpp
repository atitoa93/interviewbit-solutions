// https://www.interviewbit.com/problems/array-3-pointers/

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
  int ret = INT_MAX;
  int i = 0, j = 0, k = 0;
  while (i < A.size() && j < B.size() && k < C.size()) {
    int mn = min(min(A[i], B[j]), C[k]);
    int mx = max(max(A[i], B[j]), C[k]);
    ret = min(ret, mx - mn);
    if (A[i] <= B[j] && A[i] <= C[k]) ++i;
    else if (B[j] <= A[i] && B[j] <= C[k]) ++j;
    else ++k;
  }
  return ret;
}
