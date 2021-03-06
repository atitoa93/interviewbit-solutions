// https://www.interviewbit.com/problems/fizzbuzz/

vector<string> Solution::fizzBuzz(int A) {
  vector <string> ret;
  for (int i = 1; i <= A; ++i) {
    if (i % 15 == 0) ret.push_back("FizzBuzz");
    else if (i % 3 == 0) ret.push_back("Fizz");
    else if (i % 5 == 0) ret.push_back("Buzz");
    else ret.push_back(to_string(i));
  }
  return ret;
}
