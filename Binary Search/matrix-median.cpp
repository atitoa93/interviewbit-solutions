// https://www.interviewbit.com/problems/matrix-median/

bool ok(vector <vector <int>> &A, int v, int &ret) {
  bool f = 0;
  int n = A.size(), m = A[0].size(), sum = 0;
  for (int i = 0; i < n; ++i) {
    int idx = lower_bound(A[i].begin(), A[i].end(), v) - A[i].begin();
    if (idx < m && A[i][idx] == v && !f) {
      ++sum;
      ret = max(ret, A[i][idx]);
      f = 1;
    } else if (idx) {
      ret = max(ret, A[i][idx - 1]);
    }
    sum += idx;
  }
  return sum <= n * m / 2 + 1;
}

int Solution::findMedian(vector<vector<int> > &A) {
  if (!A.size()) return 0;
  
  int l = 0, r = INT_MAX, ret = 0;
  while (l < r) {
    int m = l + (r - l + 1ll) / 2;
    int tmp = ret;
    if (ok(A, m, tmp)) l = m, ret = tmp;
    else r = m - 1;
  }
  
  return ret;
}
