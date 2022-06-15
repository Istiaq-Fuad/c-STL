#include <iostream>
#include <vector>

using namespace std;

void some_function(vector<int> v) {
  // this makes a copy of the vector
  // shouldn't do it cause it takes much memory to make a copy of that vector
}

void some_function(const vector<int>& v) {  // OK
  // should use this type of construction
  // if we need to change the content of the vector just omitting the const
  // module will do the job
}

int main() {
  vector<int> v;
  // if we specified the size like v(20) while initialization
  // size defined vector fills it with 0 (zeroes)
  // we can use the v.resize() function to change it's size

  // If you want vector to be initialized with something else, write it in such
  // manner
  vector<string> names(20, "Unknown");
  // this creates a vector of size 20 each indexes filled with the string
  // "Unknown"

  vector<vector<int> > v_2d;
  // vector < vector < int >> WrongDefinition;
  // Wrong: compiler may be confused by ‘operator >>’

  int N, M;
  vector<vector<int> > Matrix(N, vector<int>(M, -1));
  // Here we create a matrix of size N*M and fill it with -1

  int elements_count = v.size();

  bool is_nonempty_ok = !v.empty();  // to check if the vector is empty
  bool is_nonempty_notgood = (v.size() >= 0);  // Try to avoid this

  vector<int> v;
  for (int i = 1; i < 1000000; i *= 2) {
    v.push_back(i);
  }
  elements_count = v.size();
}