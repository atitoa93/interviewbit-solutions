// https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
  long long n = A.size(), sum = 0, sumSquare = 0;
  
  for (int i = 0; i < A.size(); ++i) {
    sum += A[i];
    sumSquare += A[i] * 1ll * A[i];
  }
  
  long long d1 = n * (n + 1) / 2 - sum;
  long long d2 = n * (n + 1) * (2 * n + 1) / 6 - sumSquare;
  
  vector <int> ret;
  
  ret.push_back((d2 / d1 - d1) / 2);
  ret.push_back((d2 / d1 + d1) / 2);
  
  return ret;
}
