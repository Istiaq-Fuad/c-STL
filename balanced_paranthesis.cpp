#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
  stack<char> s;
  char ch;

  // for each character in the expression, check conditions
  for (int i = 0; i < expr.length(); i++) {
    // when it is opening bracket, push into stack
    if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
      s.push(expr[i]);
      continue;
    }

    // stack cannot be empty as it is not opening bracket, there must be closing
    // bracket
    if (s.empty()) return false;

    switch (expr[i]) {
      // for closing parenthesis, pop it and check for braces and square
      // brackets
      case ')':
        ch = s.top();
        s.pop();
        if (ch == '{' || ch == '[') return false;
        break;

      case '}':
        ch = s.top();
        s.pop();
        if (ch == '(' || ch == '[') return false;
        break;

      case ']':
        ch = s.top();
        s.pop();
        if (ch == '(' || ch == '{') return false;
        break;
    }
  }
  return (s.empty());  // when stack is empty, return true
}

main() {
  string expr = "[{}(){()}]";

  if (isBalanced(expr))
    cout << "Balanced";
  else
    cout << "Not Balanced";
}