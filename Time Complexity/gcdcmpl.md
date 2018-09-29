https://www.interviewbit.com/problems/gcdcmpl/

In the following C++ function, let n >= m.

```cpp
int gcd(int n, int m) {
  if (n % m == 0) return m;
  if (n < m) swap(n, m);
  while (m > 0) {
    n = n % m;
    swap(n, m);
  }
  return n;
}
```

What is the time complexity of the above function assuming `n > m`?

- [x] Θ(logn)
- [ ] Ω(n)
- [ ] Θ(loglogn)
- [ ] Θ(sqrt(n))
