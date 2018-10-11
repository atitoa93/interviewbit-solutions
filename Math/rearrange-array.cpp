// https://www.interviewbit.com/problems/rearrange-array/

void Solution::arrange(vector<int> &A) {
  int N = A.size();
  for (int i = 0; i < N; ++i) {
    A[i] = N * (A[A[i]] % N) + A[i];
  }
  for (int i = 0; i < N; ++i) {
    A[i] /= N;
  }
}
