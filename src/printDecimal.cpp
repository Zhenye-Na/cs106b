#include <iostream>
using namespace std;

void printDecimal(int n);
void helper(int n, st)


int main() {
  printDecimal(3);
  return 0;
}


void printDecimal(int n) {
  helper(n, "");
}


void helper(int n, string result) {
  if (n == 0) {
    cout << result << endl;
  } else {
    for (int i = 0; i < 10; i++) {
      helper(n - 1, result + to_string(i));
    }
  }
}
