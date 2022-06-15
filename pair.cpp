#include <iostream>
#include <utility>

using namespace std;

int main() {
  // can be a pair of any two data structure
  // this is a pair of string and anothe pair(two integers)
  pair<string, pair<int, int> > P;
  // pairs are mostly used for comparison
  // and there are built in fucntion for it

  string s = P.first;       // extract string
  int x = P.second.first;   // extract first int
  int y = P.second.second;  // extract second int

  // another pair example
  pair<int, string> p2 = {2, "abcd"};

  // auto p2 = make_pair(2, "abcd");
  // make pair will automatically set the data type
  cout << p2.first << ' ' << p2.second << '\n';  // output: 2 abcd

  pair<int, string> &p3 = p2;  // without & sing p3 makes a copy of p2
  p3.first = 3;

  cout << p2.first << ' ' << p2.second;  // output: 3 abcd
}