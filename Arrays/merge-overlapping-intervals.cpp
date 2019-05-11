// https://www.interviewbit.com/problems/merge-overlapping-intervals/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
void insertInterval(vector<Interval> &a, Interval v) {
  int x = a.size();
  for (int i = a.size() - 1; i >= 0; --i)
    if (v.start <= a[i].end) x = i;
  
  int y = -1;
  for (int i = 0; i < a.size(); ++i)
    if (v.end >= a[i].start) y = i;

  if (x == a.size()) a.insert(a.end(), v);
  else if (y == -1) a.insert(a.begin(), v);
  else {
    Interval start = a[x], end = a[y];
    a.erase(a.begin() + x, a.begin() + y + 1);
    a.insert(a.begin() + x, Interval(min(v.start, start.start), max(v.end, end.end)));
  }
}

vector<Interval> Solution::merge(vector<Interval> &A) {
  vector <Interval> ret;
  for (int i = 0; i < A.size(); ++i) {
    insertInterval(ret, A[i]);
  }
  return ret;
}
