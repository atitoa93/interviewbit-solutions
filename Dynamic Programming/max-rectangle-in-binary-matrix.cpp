// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/

int maxArea(vector <int> &a) {
  int ret = 0, i = 0, n = a.size();
  stack <int> s;
  
  while (i < n || !s.empty()) {
    if (i < n && (s.empty() || a[s.top()] <= a[i])) {
      s.push(i++);
    } else {
      int top = s.top(); s.pop();
      int curArea = a[top] * (s.empty() ? i : (i - s.top() - 1));
      ret = max(ret, curArea);
    }
  }

  return ret;
}

int Solution::maximalRectangle(vector<vector<int> > &A) {
  int ret = maxArea(A[0]);
  
  for (int i = 1; i < A.size(); ++i) {
    for (int j = 0; j < A[i].size(); ++j) {
      if (A[i][j]) A[i][j] += A[i - 1][j];
    }
    ret = max(ret, maxArea(A[i]));
  }

  return ret;
}
