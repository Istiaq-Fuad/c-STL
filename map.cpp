// given N strings
// print string in lexiographical order with their frequency

#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> m;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    m[s] += 1;
  }

  for (auto &p : m) {
    cout << p.first << " : " << p.second << '\n';
  }
}

// maps doesn't store duplicate keys
// also they store keys in ascending order
// but underodered_map doesn't store the keys in ordered way
// and unordered_map just works with basic data types with low time complexity