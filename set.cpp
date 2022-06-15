#include <bits/stdc++.h>

using namespace std;

void print(set<string>& s) {
  for (string value : s) {
    cout << value << '\n';
  }
}

int main() {
  set<string> x;
  x.insert("abc");
  x.insert("def");
  x.insert("abc");

  // auto y = x.find("abc");  // return iterator
  // if (y != x.end()) {      // if no match found return end()
  //   cout << *y << '\n';
  // }

  print(x);
}