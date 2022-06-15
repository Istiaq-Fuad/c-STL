#include <bits/stdc++.h>

using namespace std;

void print(multiset<string>& s) {
  for (string value : s) {
    cout << value << '\n';
  }
}

int main() {
  multiset<string> s;
  s.insert("abc");
  s.insert("def");
  s.insert("gst");
  s.insert("abc");
  s.insert("abc");

  // return first abc from the set, if it has duplicate abc
  auto it = s.find("abc");  // if abc doesn'y exist return s.end()

  if (it != s.end()) s.erase(it);  // erase only the first element
  print(s);

  cout << '\n';
  s.erase("abc");  // erase all the (abc)s
  print(s);
}