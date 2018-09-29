// https://www.interviewbit.com/problems/max-non-negative-subarray/

vector<int> Solution::maxset(vector<int> &A) {
  long long curS = 0, maxS;
  int curL = 0, curR = 0, maxL = 0, maxR = -1;
  
  for (int i = 0; i < A.size(); ++i) {
    if (A[i] < 0) {
      curS = 0, curL = i + 1;
      continue;
    }
    curS += A[i], curR = i;
    if (maxS < curS || (maxS == curS && maxR - maxL < curR - curL)) {
      maxS = curS;
      maxL = curL, maxR = curR;
    }
  }
  
  vector <int> ret;
  
  if (maxL <= maxR) {
    for (int i = maxL; i <= maxR; ++i) {
      ret.push_back(A[i]);
    }
  }
  
  return ret;
}
