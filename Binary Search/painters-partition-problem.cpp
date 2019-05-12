// https://www.interviewbit.com/problems/painters-partition-problem/

bool valid (vector <int> &a, int k, int time) {
  for (int i = 0, j = 0; i < k; ++i) {
    int cur = 0;
    while (j < a.size() && cur + a[j] <= time) {
      cur += a[j++];
    }
    if (j == a.size()) return true;
  }
  return false;
}

int ans(int v, int t) {
  return (v * 1ll * t) % 10000003;
}

int Solution::paint(int k, int t, vector<int> &a) {
  int n = a.size(), l = 0, r = 0;
  for (int i = 0; i < a.size(); ++i)
    l = max(l, a[i]), r += a[i];
  
  if (k >= n) return ans(l, t);
  if (k == 1) return ans(r, t);
  
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (valid(a, k, mid)) r = mid;
    else l = mid + 1;
  }

  return ans(r, t);
}
