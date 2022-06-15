#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void printVec(vector<pair<int, int> > &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].first << ' ' << v[i].second << '\n';
  }
}

int main() {
  vector<pair<int, int> > v = {{1, 2}, {3, 4}, {4, 5}};
  // print the vector of pair normally:
  // printVec(v);

  // print using iterator :
  // this line isn't required if we use auto in the next line
  // vector<pair<int, int> >::iterator vit;

  for (auto vit = v.begin(); vit != v.end(); vit++) {
    // (*vit).first can be written as vit->first
    cout << (*vit).first << ' ' << (*vit).second << '\n';
  }

  cout << '\n';

  for (auto &value : v) {  // value takes elements as reference
    cout << value.first << ' ' << value.second << '\n';
  }

  // to take input in this vector
  // cin >> x >> y;
  // v.pushback({x, y});

  vector<int> v2[10];  // array of 10 vectors
}