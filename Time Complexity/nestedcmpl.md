https://www.interviewbit.com/problems/nestedcmpl/

What is the time, space complexity of following code

```cpp
int a = 0, b = 0;
for (i = 0; i < N; i++) {
  for (j = 0; j < N; j++) {
    a = a + j;
  }
}
for (k = 0; k < N; k++) {
  b = b + k;
}
```

- [x] O(N * N) time, O(1) space
- [ ] O(N) time, O(N) space
- [ ] O(N) time, O(N) space
- [ ] O(N * N) time, O(N) space
- [ ] O(N * N * N) time, O(1) space
