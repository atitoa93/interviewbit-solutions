// https://www.interviewbit.com/problems/set-matrix-zeros/

void Solution::setZeroes(vector<vector<int> > &A) {
  if (!A.size()) return;
  
  int n = A.size(), m = A[0].size();
  for (int i = 0; i < n; ++i) {
    bool f = 0;
    for (int j = 0; j < m; ++j) f |= !A[i][j];
    if (f) {
      for (int j = 0; j < m; ++j)
        if (A[i][j]) A[i][j] = 2;
    }
  }
  
  for (int i = 0; i < m; ++i) {
    bool f = 0;
    for (int j = 0; j < n; ++j) f |= !A[j][i];
    if (f) {
      for (int j = 0; j < n; ++j)
        if (A[j][i]) A[j][i] = 2;
    }
  }
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (A[i][j] == 2) {
        A[i][j] = 0;
      }
    }
  }
}
