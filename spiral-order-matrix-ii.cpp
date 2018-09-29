// https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {
  vector <vector <int> > ret(A, vector <int> (A));
  
  int x = 0, y = 0, d = 0, c = 1;
  
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};
  
  while (c <= A * A) {
    ret[x][y] = c++;
    x += dx[d], y += dy[d];
    if (y < 0 || x >= A || y >= A || ret[x][y]) {
      x -= dx[d], y -= dy[d];
      d += 1, d %= 4;
      x += dx[d], y += dy[d];
    }
  }
  
  return ret;
}
