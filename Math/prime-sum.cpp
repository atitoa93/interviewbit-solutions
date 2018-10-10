// https://www.interviewbit.com/problems/prime-sum/

vector<int> Solution::primesum(int A) {
  vector <bool> primes(A, 1);
  int ub = sqrt(A);
  for (int i = 2; i <= ub; ++i) {
    if (primes[i]) {
      for (int j = i * i; j < A; j += i) {
        primes[j] = 0;
      }
    }
  }
  
  for (int i = 2; i < A; ++i) {
    if (primes[i] && primes[A - i]) {
      vector <int> ret = {i, A - i};
      return ret;
    }
  }
}
