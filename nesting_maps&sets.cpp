// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, multiset<string> > m;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int mark;
    string name;
    cin >> name >> mark;
    m[mark].insert(name);
  }

  // iterate map from the end
  auto itm = --m.end();
  while (true) {
    auto &students = (*itm).second;
    int mark = (*itm).first;

    for (auto &student : students) {
      cout << student << ' ' << mark << '\n';
    }

    if (itm == m.begin()) break;
    itm--;
  }
}