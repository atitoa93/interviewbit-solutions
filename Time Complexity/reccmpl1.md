https://www.interviewbit.com/problems/reccmpl1/

What is the worst case time complexity of the following code

```cpp
/* 
 * V is sorted 
 * V.size() = N
 * The function is initially called as searchNumOccurrence(V, k, 0, N-1)
 */
int searchNumOccurrence(vector<int> &V, int k, int start, int end) {
  if (start > end) return 0;
  int mid = (start + end) / 2;
  if (V[mid] < k) return searchNumOccurrence(V, k, mid + 1, end);
  if (V[mid] > k) return searchNumOccurrence(V, k, start, mid - 1);
  return searchNumOccurrence(V, k, start, mid - 1) + 1 + searchNumOccurrence(V, k, mid + 1, end);
}
```

- [ ] O(sqrt N)
- [ ] O(log N)
- [ ] O(log^2 N )
- [x] O(N)
- [ ] O(N * log N)
- [ ] O(N * sqrt N)
