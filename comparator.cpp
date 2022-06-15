// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int, string> > v;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int mark;
    string name;
    cin >> name >> mark;
    v.push_back({mark, name});
  }

  sort(v.begin(), v.end(), [](pair<int, string> a, pair<int, string> b) {
    if (a.first != b.first) return a.first > b.first;
    return a.second <= b.second;
  });

  for (auto &it : v) {
    cout << it.second << ' ' << it.first << '\n';
  }
}