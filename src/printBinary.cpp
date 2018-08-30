#include <iostream>
using namespace std;

void printBinary(int n);


int main() {
  printBinary(43);
  cout << endl;
  return 0;
}


/*
 * Print given integer in binary representation
 * Example: given 43, return 101011
 */
void printBinary(int n) {

  // handling negative number in this way
  if (n < 0) {
    cout << "-";

    // revursively call itself again
    printBinary(-n);
  } else if (n < 2) {
    // we can directly print out if n < 2
    // base case
    cout << n;
  } else {
    // recursive case

    // last digit is represented by whether divided by 2 without remaining parts
    int lastDigit    = n % 2;

    // rest of n is n / 2
    int restofNumber = n / 2;
    printBinary(restofNumber);

    // actually, we can call printBinary(lastDigit) here
    cout << lastDigit;
  }
}
