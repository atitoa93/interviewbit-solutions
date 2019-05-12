// https://www.interviewbit.com/problems/allocate-books/

bool valid (vector <int> &a, int b, int pages) {
  for (int i = 0, j = 0; i < b; ++i) {
    int cur = 0;
    while (j < a.size() - i && cur + a[j] <= pages) {
      cur += a[j++];
    }
    if (j == a.size()) return true;
  }
  return false;
}

int Solution::books(vector<int> &a, int b) {
  int n = a.size(), l = 0, r = 0;
  for (int i = 0; i < a.size(); ++i)
    l = max(l, a[i]), r += a[i];
  
  if (b > n) return -1;
  if (b == n) return l;
  if (b == 1) return r;
  
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (valid(a, b, mid)) r = mid;
    else l = mid + 1;
  }

  return r;
}
