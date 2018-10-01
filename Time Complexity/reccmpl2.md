https://www.interviewbit.com/problems/reccmpl2/

What is the worst case time complexity of the following code

```cpp
int findMinPath(vector<vector<int> > &V, int r, int c) {
  int R = V.size();
  int C = V[0].size();
  if (r >= R || c >= C) return 100000000; // Infinity
  if (r == R - 1 && c == C - 1) return 0;
  return V[r][c] + min(findMinPath(V, r + 1, c), findMinPath(V, r, c + 1));
}
```

Assume R = V.size() and C = V[0].size().

- [x] O(2^(R + C))
- [ ] O(R*C)
- [ ] O(R + C)
- [ ] O(R*R + C*C)
- [ ] O(R*C*log(R*C))