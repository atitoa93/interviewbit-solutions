// https://www.interviewbit.com/problems/noble-integer/

int Solution::solve(vector<int> &A) {
  sort(A.begin(), A.end());
  
  for (int i = 0; i < A.size(); ++i) {
    int rightMost = upper_bound(A.begin(), A.end(), A[i]) - A.begin();
    if (A[i] == A.size() - rightMost) {
      return 1;
    }
  }
  
  return -1;
}
