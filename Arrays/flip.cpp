// https://www.interviewbit.com/problems/flip/

vector<int> Solution::flip(string A) {
  int l = -1, r = -1;
  int cur = 0, maxi = 0, start = 0;
  
  for (int i = 0; i < A.size(); ++i) {
    cur += A[i] == '1' ? -1 : 1;
    
    if (maxi < cur) {
      maxi = cur, l = start, r = i;
    }
    
    if (cur < 0) {
      cur = 0, start = i + 1;
    }
  }
  
  vector <int> ret;
  
  if (l != -1) {
    ret.push_back(l + 1);
    ret.push_back(r + 1);
  }
  
  return ret;
}
