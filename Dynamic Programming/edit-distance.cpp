// https://www.interviewbit.com/problems/edit-distance/

int Solution::minDistance(string A, string B) {
  int n = A.size(), m = B.size();
  vector <vector <int> > dp(n + 1, vector <int> (m + 1));
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      if (!i) dp[i][j] = j;
      else if (!j) dp[i][j] = i;
      else if (A[i - 1] == B[j - 1]) dp[i][j] = dp[i - 1][j - 1];
      else dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
    }
  }
  return dp[n][m];
}
