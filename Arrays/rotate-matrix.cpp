// https://www.interviewbit.com/problems/rotate-matrix/

void Solution::rotate(vector<vector<int> > &A) {
  int n = A.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n - i - 1; ++j) {
      int t1 = A[i][j];
      int t2 = A[j][n - 1 - i];
      int t3 = A[n - 1 - i][n - 1 - j];
      int t4 = A[n - 1 - j][i];
      
      A[i][j] = t4;
      A[j][n - 1 - i] = t1;
      A[n - 1 - i][n - 1 - j] = t2;
      A[n - 1 - j][i] = t3;
    }
  }
}
