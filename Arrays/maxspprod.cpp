// https://www.interviewbit.com/problems/maxspprod/

int Solution::maxSpecialProduct(vector<int> &A) {
  stack <int> s;
  
  vector <int> l(A.size());
  for (int i = 0; i < A.size(); ++i) {
    while (!s.empty() && A[s.top()] <= A[i]) s.pop();
    if (s.empty()) l[i] = 0;
    else l[i] = s.top();
    s.push(i);
  }
  
  while (!s.empty()) s.pop();
  
  vector <int> r(A.size());
  for (int i = A.size() - 1; i >= 0; --i) {
    while (!s.empty() && A[s.top()] <= A[i]) s.pop();
    if (s.empty()) r[i] = 0;
    else r[i] = s.top();
    s.push(i);
  }
  
  long long ret = 0;
  for (int i = 0; i < A.size(); ++i) {
    ret = max(ret, (l[i] * 1ll * r[i]));
  }
  
  return ret % 1000000007;
}
