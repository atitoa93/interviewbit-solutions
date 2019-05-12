// https://www.interviewbit.com/problems/median-of-array/

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
  int n = A.size(), m = B.size();

  if (!n && !m) return 0.0;
  if (!n) return (B[m / 2] + B[(m - 1) / 2]) / 2.0;
  if (!m) return (A[n / 2] + A[(n - 1) / 2]) / 2.0;

  int l = 0, r = n, i, j, al, ar, bl, br;
  while (l <= r) {
    i = (l + r) / 2, j = (n + m) / 2 - i;

    if (j < 0) { r = i - 1; continue; }
    if (j > m) { l = i + 1; continue; }

    if (!i) al = INT_MIN, ar = A[i];
    else if (i == n) al = A[i - 1], ar = INT_MAX;
    else al = A[i - 1], ar = A[i];

    if (!j) bl = INT_MIN, br = B[j];
    else if (j == m) bl = B[j - 1], br = INT_MAX;
    else bl = B[j - 1], br = B[j];

    if (al > br) r = i - 1;
    else if (ar < bl) l = i + 1;
    else if ((n + m) % 2) return min(ar, br);
    else return (max(al, bl) + min(ar, br)) / 2.0;
  }

  return 0.0;
}
