#include <iostream>
using namespace std;

void printAllBinary(int digits);
void helper(int digits, string output);


int main(int argc, char const *argv[]) {
  printAllBinary(4);
  return 0;
}

/*
 * print all binary combination of num digits
 * i.e. for digits = 2 -> 00, 01, 10, 11
 */
void printAllBinary(int digits) {
  helper(digits, "");
}


// Backtracking -> if you cannot add more params, make a helper function
void helper(int digits, string output) {
  if (digits == 0) {
    cout << output << endl;
  } else {
    helper(digits - 1, output + "0");
    helper(digits - 1, output + "1");
  }
}


/*

Output:

0000
0001
0010
0011
0100
0101
0110
0111
1000
1001
1010
1011
1100
1101
1110
1111

*/
