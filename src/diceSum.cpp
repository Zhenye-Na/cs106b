#include <iostream>
#include <vector>
using namespace std;

void diceSum(int dice, int desiredSum);
void helper(int dice, int desiredSum, vector<int>& combinations);


int main() {
  diceSum(2, 7);
  return 0;
}

/*
 * Prints all possible outcomes of rooling the given
 * number of six-sided dice that add up to exactly the
 * given desired sum, in {#, #, #} format.
*/
void diceSum(int dice, int desiredSum) {
  vector<int> result;
  helper(dice, desiredSum, result);
}


void helper(int dice, int desiredSum, vector<int>& combinations) {
  if (dice == 0) {
    if (desiredSum == 0) {
      for(int i = 0; i < combinations.size(); i++) {
        cout << combinations[i] << " ";
      }
      cout << endl;
    }
  } else if (desiredSum >= dice && desiredSum <= dice * 6) {
    for (int i = 1; i < 7; i++) {
      // choose "i"
      combinations.push_back(i);

      // Explore current combination
      helper(dice - 1, desiredSum - i, combinations);

      // remove "i"
      combinations.pop_back();
    }
  }
}


/*

Output:

1 6
2 5
3 4
4 3
5 2
6 1

*/
