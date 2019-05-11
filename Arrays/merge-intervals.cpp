// https://www.interviewbit.com/problems/merge-intervals/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

vector<Interval> Solution::insert(vector<Interval> &a, Interval v) {
  vector <Interval> ret = a;

  int x = a.size();
  for (int i = a.size() - 1; i >= 0; --i)
    if (v.start <= a[i].end) x = i;
  
  int y = -1;
  for (int i = 0; i < a.size(); ++i)
    if (v.end >= a[i].start) y = i;

  if (x == a.size()) ret.insert(ret.end(), v);
  else if (y == -1) ret.insert(ret.begin(), v);
  else {
    ret.erase(ret.begin() + x, ret.begin() + y + 1);
    ret.insert(ret.begin() + x, Interval(min(v.start, a[x].start), max(v.end, a[y].end)));
  }

  return ret;
}
