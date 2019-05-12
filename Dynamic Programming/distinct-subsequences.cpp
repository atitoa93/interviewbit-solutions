// https://www.interviewbit.com/problems/distinct-subsequences/

int bt(vector <vector <int> > &dp, const string &a, const string &b, int i, int j) {
  if (i == a.size()) return j == b.size();
  if (j == b.size()) return 1;
  
  int &ret = dp[i][j];

  if (~ret) return ret;
  ret = 0;

  if (a[i] == b[j]) ret = bt(dp, a, b, i + 1, j + 1) + bt(dp, a, b, i + 1, j);
  else ret = bt(dp, a, b, i + 1, j);

  return ret;
}

// recursive
int Solution::numDistinct(string A, string B) {
  vector <vector <int> > dp(A.size(), vector <int> (B.size(), -1));
  return bt(dp, A, B, 0, 0);
}

// building table
int Solution::numDistinct(string A, string B) {
  int dp[A.size() + 1][B.size() + 1];
  for (int i = 0; i <= A.size(); ++i) dp[i][0] = 1;
  for (int j = 1; j <= B.size(); ++j) dp[0][j] = 0;
  for (int  i = 1; i <= A.size(); ++i) {
    for (int j = 1; j <= B.size(); ++j) {
      if (A[i - 1] == B[j - 1]) dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
      else dp[i][j] = dp[i - 1][j];
    }
  }
  
  return dp[A.size()][B.size()];
}
