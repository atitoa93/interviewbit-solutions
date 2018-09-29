// https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
  vector <vector <int>> ret(A, vector <int>());
  
  if (A) {
    ret[0].push_back(1);
    for (int i = 1; i < A; ++i) {
      ret[i].push_back(1);
      for (int j = 1; j < i; ++j) {
        ret[i].push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
      }
      ret[i].push_back(1);
    }
  }
  
  return ret;
}
