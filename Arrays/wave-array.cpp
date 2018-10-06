// https://www.interviewbit.com/problems/wave-array/

vector<int> Solution::wave(vector<int> &A) {
  vector <int> ret = A;
  sort(ret.begin(), ret.end());
  for (int i = 0; i < ret.size() - 1; i += 2) {
    swap(ret[i], ret[i + 1]);
  }
  return ret;
}
