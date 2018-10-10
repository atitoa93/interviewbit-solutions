// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

vector<int> Solution::subUnsort(vector<int> &A) {
  int s = -1, e = -1;
  for (int i = 1; i < A.size(); ++i) {
    if (s == -1 && A[i] < A[i - 1]) s = i - 1;
    if (e == -1 && A[A.size() - i - 1] > A[A.size() - i]) e = A.size() - i;
  }
  
  vector <int> ret;
  if (~s) {
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = s; i <= e; ++i) {
      mini = min(mini, A[i]);
      maxi = max(maxi, A[i]);
    }
    while (s >= 0 && A[s] > mini) --s;
    while (e < A.size() && A[e] < maxi) ++e;
    ret.push_back(s + 1);
    ret.push_back(e - 1);
  } else {
    ret.push_back(-1);  
  }
  
  return ret;
}
