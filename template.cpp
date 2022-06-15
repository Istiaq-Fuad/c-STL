#include <iostream>

template <typename T>
auto max(T x, T y) {
  return (x > y) ? x : y;
}

// if we want the arguments to be of different types
template <typename T,
          typename U>  // We're using two template type parameters named T and U
auto max(T x, U y)     // x can resolve to type T, and y can resolve to type U
{
  return (x > y) ? x : y;  // uh oh, we have a narrowing conversion problem here
}

int main() {
  std::cout << max(1, 2) << '\n';      // will instantiate max(int, int)
  std::cout << max(1.5, 2.5) << '\n';  // will instantiate max(double, double)
  std::cout << max(1, 2.5) << '\n';    // will instantiate max(int, double)

  return 0;
}