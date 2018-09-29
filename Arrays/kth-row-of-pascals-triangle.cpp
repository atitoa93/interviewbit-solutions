// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

vector<int> Solution::getRow(int A) {
  vector <int> ret(1, 1);
  
  for (int i = 1; i <= A / 2; ++i) {
    ret.push_back(ret.back() * (A - i + 1) / i);
  }
  
  for (int i = A / 2 + 1; i <= A; ++i) {
    ret.push_back(ret[A - i]);
  }
  
  return ret;
}
