// https://www.interviewbit.com/problems/rotated-sorted-array-search/

int Solution::search(const vector<int> &A, int B) {
  int l = 0, r = A.size() - 1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (A[m] == B) return m;
    
    if (A[0] <= A[m]) {
      if (A[0] <= B && B < A[m]) r = m - 1;
      else l = m + 1;
    } else {
      if (A[m] < B && B <= A.back()) l = m + 1;
      else r = m - 1;
    }
  }
  return -1;
}
