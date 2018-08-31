#include <iostream>
#include "vector.h"

using namespace std;

void permute(vector<string>& v);
void helper(vector<string>& v, vector<string> chose);


int main(int argc, char const *argv[]) {
  vector<string> v {"a", "b", "c"};
  permute(v);
  return 0;
}


void permute(vector<string>& v) {
  vector<string> chosen;
  helper(v, chosen);
}


void helper(vector<string>& v, vector<string>& chosen) {

  // base case
  if (v.isEmpty()) {
    cout << chosen <<  endl;
  } else {
    // recursive case
    for (int i = 0; i < v.size(); i++) {
      string s = v[i];

      // choose
      chosen.puch_back(s);
      v.remove(i);

      // explore
      helper(v, chosen);

      // un-choose
      chosen.pop_back();
      v.insert(i, s)
    }
  }
}
