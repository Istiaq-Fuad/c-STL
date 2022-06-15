#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4};

  vector<int>::iterator vit;
  for (vit = v.begin(); vit < v.end(); vit++) {
    cout << *vit << ' ';
  }

  cout << '\n';

  for (int &value : v) {  // value takes elements as reference
    value++;
  }

  for (int value : v) {  // value takes the copies of the element
    cout << value << ' ';
  }
}