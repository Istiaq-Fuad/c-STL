#include <iostream>

using namespace std;

void increment(int &x) {
  cout << x << '\n';
  x++;
}

int main() {
  int x = 2;
  float y = 2.5;
  bool z = x > y;
  cout << z << '\n';

  increment(x);
  cout << x << '\n';
}