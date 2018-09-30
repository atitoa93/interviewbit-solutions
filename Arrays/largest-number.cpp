// https://www.interviewbit.com/problems/largest-number/

long long merge(long long a, long long b) {
  long long p10 = 10;
  while(p10 <= b) p10 *= 10;
  return a * p10 + b;
}

bool cmp(int a, int b) {
  return merge(a, b) > merge(b, a);
}

string Solution::largestNumber(const vector<int> &A) {
  vector <int> B = A;
  sort(B.begin(), B.end(), cmp);
  
  string ret = "";
  if (B.empty() || !B[0]) {
    ret = "0";
  } else {
    for (int i = 0; i < B.size(); ++i)
      ret += to_string(B[i]);
  }
  
  return ret;
}
