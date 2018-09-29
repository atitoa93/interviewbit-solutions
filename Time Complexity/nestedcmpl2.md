https://www.interviewbit.com/problems/nestedcmpl2/

What is the time complexity of the following code

```cpp
int a = 0;
for (i = 0; i < N; i++) {
  for (j = N; j > i; j--) {
    a = a + i + j;
  }
}
```

- [ ] O(N)
- [ ] O(N*log(N))
- [ ] O(N * Sqrt(N))
- [x] O(N*N)
