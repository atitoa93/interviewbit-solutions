// https://www.interviewbit.com/problems/maximum-absolute-difference/

int Solution::maxArr(vector<int> &A) {
  int maxi1 = INT_MIN, mini1 = INT_MAX;
  int maxi2 = INT_MIN, mini2 = INT_MAX;
  
  for (int i = 0; i < A.size(); ++i) {
    maxi1 = max(maxi1, A[i] + i);
    maxi2 = max(maxi2, A[i] - i);
    mini1 = min(mini1, A[i] + i);
    mini2 = min(mini2, A[i] - i);
  }
  
  return max(maxi1 - mini1, maxi2 - mini2);
}
