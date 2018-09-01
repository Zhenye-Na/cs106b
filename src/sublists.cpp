#include <iostream>
#include "vector.h"

using namespace std;


void sublists(vector<string>& v);
void helper(vector<string>& v, vector<string>& chosen);

int main() {
  Vector<string> names {"Janes", "Bob", "Matt", "sra"};
  cout << "sublist of " << names << " : " << endl << end;;
  sublists(names);
  return 0;
}

/*
 * Prints all subsets of the given vector
 */
void sublists(vector<string>& v) {

}

void helper(vector<string>& v, vector<string>& chosen) {
  if (v.isEmpty()) {
    // base case
  } else {
    // recursive case
  }
}
