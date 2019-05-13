// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
  A.resize(unique(A.begin(), A.end()) - A.begin());
  return A.size();
}
