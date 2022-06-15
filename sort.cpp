#include <bits/stdc++.h>

using namespace std;

int main() {
  // sort function takes 3 parameter
  // first two parameter takes pointer/iterator of ranges to sort
  // first value in inclusive and sencond one is exclusive
  // last one is optional which takes a comeperator function

  int arr[] = {1, 7, 3, 2};
  sort(arr, arr + 4);
  // for (int i = 0; i < 4; i++) cout << arr[i] << '\n';

  vector<int> v = {1, 7, 3, 2};
  sort(v.begin(), v.end());
  // for (int &value : v) cout << value << '\n';

  vector<pair<int, int> > vec = {{1, 2}, {5, 4}, {5, 5}, {2, 3}};
  // what we want should be returned in the comparator function
  // it will automatically become true or false and return as expected
  sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
    // using lambda function
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
  });

  for (auto &it : vec) {
    cout << it.first << ' ' << it.second << '\n';
  }
}