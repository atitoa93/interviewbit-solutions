// https://www.interviewbit.com/problems/palindrome-partitioning-ii/

int bt(vector <int> &dp, vector <vector <int> > &p, string &s, int idx) {
  if (idx == s.size()) return 0;
  
  int &ret = dp[idx];
  if (~ret) return ret;
  
  ret = s.size();
  for (int i = idx; i < s.size(); ++i) {
    if (p[idx][i]) {
      ret = min(ret, bt(dp, p, s, i + 1) + 1);
    }
  }

  return ret;
}

int solve(vector <int> &dp, vector <vector <int> > &p, string &s) {
  int n = s.size();
  for (int i = 0; i < n; ++i) {
    if (p[0][i]) dp[i] = 0;
    else {
      dp[i] = i;
      for (int j = 1; j <= i; ++j) {
        if (p[j][i]) {
          dp[i] = min(dp[i], dp[j - 1] + 1);
        }
      }
    }
  }
  return dp[n - 1];
}

int Solution::minCut(string A) {
  int n = A.size();
  vector <int> dp(n, -1);
  vector <vector <int> > p(n, vector <int> (n));

  for (int i = 0; i < n; ++i) {
    int l = i, r = i;
    while (l >= 0 && r < n && A[l] == A[r])
      p[l--][r++] = 1;
    
    l = i, r = i + 1;
    while (l >= 0 && r < n && A[l] == A[r])
      p[l--][r++] = 1;
  }
  
  // building table
  return solve(dp, p, A);
  
  // recursive
  // return bt(dp, p, A, 0) - 1;
}
