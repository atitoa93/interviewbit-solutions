// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
  vector <int> ret;
  
  int carry = 1;
  for (int i = A.size() - 1; i >= 0; --i) {
    int digit = A[i] + carry;
    carry = digit / 10;
    ret.push_back(digit % 10);
  }
  
  if (carry) {
    ret.push_back(carry);
  }
  
  while (!ret.empty() && !ret.back()) {
    ret.pop_back();
  }
  
  reverse(ret.begin(), ret.end());
  
  return ret;
}
