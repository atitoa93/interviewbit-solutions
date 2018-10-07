// https://www.interviewbit.com/problems/hotel-bookings-possible/

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
  int k = K;
  vector <pair <int, int>> b;
  for (int i = 0; i < arrive.size(); ++i) {
    b.push_back({arrive[i], depart[i]});
  }
  sort(b.begin(), b.end());
  priority_queue <int> pq;
  for (int i = 0; i < b.size(); ++i) {
    if (b[i].first == b[i].second) continue;
    while (!pq.empty() && -pq.top() <= b[i].first) {
      ++k;
      pq.pop();
    }
    if (!k) return 0;
    --k;
    pq.push(-b[i].second);
  }
  return 1;
}
