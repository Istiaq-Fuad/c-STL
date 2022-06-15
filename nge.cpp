// next greater element
// using stack it can be done in O(n) time complexity
#include <iostream>
#include <stack>

using namespace std;

int main() {
  int arr[] = {4, 5, 2, 25, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  stack<int> s;
  s.push(0);

  int nge[n], counter = 0;
  for (int i = 1; i < n; i++) {
    while (!s.empty() && arr[i] > arr[s.top()]) {
      nge[s.top()] = arr[i];
      s.pop();
      // s.push(arr[i]);
    }
    s.push(i);
  }

  while (!s.empty()) {
    nge[s.top()] = -1;
    s.pop();
  }

  for (int i = 0; i < n; i++) {
    cout << nge[i] << ' ';
  }

  cout << '\n';
  return 0;
}