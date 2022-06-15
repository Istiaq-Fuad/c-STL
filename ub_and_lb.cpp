#include <bits/stdc++.h>

using namespace std;

int main() {
  // upper_bound and lower_bound -> Olog(n) {if the container is sorted}
  // else time complexity will be O(n)
  vector<int> v = {1, 5, 9, 3, 5, 8, 2};
  sort(v.begin(), v.end());

  // lower_bound(Iterator first, Iterator last, const val)
  // lower_bound returns an iterator pointing to the first element in the range
  // [first,last) which has a value not less than ‘val’.
  auto itv = lower_bound(v.begin(), v.end(), 5);
  cout << *(itv) << '\n';

  // in termns of sets and maps the function should be called differently
  // else the time complexity will be O(n)
  set<int> s;
  s.insert(1);
  s.insert(4);
  s.insert(2);
  s.insert(9);
  s.insert(7);

  map<int, string> m;
  m[1] = "abc";
  m[5] = "gcd";
  m[2] = "sdh";
  m[9] = "abh";
  m[2] = "bcd";

  auto its = s.upper_bound(5);
  cout << *its << '\n';

  auto itm = m.lower_bound(3);
  cout << (*itm).first << ' ' << (*itm).second << '\n';
}