// https://www.interviewbit.com/problems/largest-distance-between-nodes-of-a-tree/

pair <int, int> dfs(const vector <vector <int> > &adj, int u) {
  int mx1 = -1, mx2 = -1, ret = 0;
  for (int i = 0; i < adj[u].size(); ++i) {
    int v = adj[u][i];
    pair <int, int> res = dfs(adj, v);
    ret = max(ret, res.second);
    if (mx1 < res.first) {
      mx2 = mx1;
      mx1 = res.first;
    } else if (mx2 < res.first) {
      mx2 = res.first;
    }
  }
  
  ret = max(ret, mx1 + mx2 + 2);
  return {mx1 + 1, ret};
}

int Solution::solve(vector<int> &A) {
  int root = -1;
  vector <vector <int> > adj(A.size());
  for (int i = 0; i < A.size(); ++i) {
    if (~A[i]) adj[A[i]].push_back(i);
    else root = i;
  }
  
  return ~root ? dfs(adj, root).second : 0;
}
