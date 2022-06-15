// g++ -std=c++20 template_cpp20.cpp
#include <iostream>

using namespace std;

// template <typename T, typename U>
// auto max(T x, U y) {
//   return (x > y) ? x : y;
// }

// this is the same code as commented code above (c++ 20 feature)
auto max(auto x, auto y) { return (x > y) ? x : y; }

int main() {
  std::cout << max(1, 2) << '\n';      // will instantiate max(int, int)
  std::cout << max(1.5, 2.5) << '\n';  // will instantiate max(double, double)
  std::cout << max(1, 2.5) << '\n';    // will instantiate max(int, double)
}