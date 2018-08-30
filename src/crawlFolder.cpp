#include <iostream>
#include "filelib.h"
using namespace std;

void crawl(int filename, int indentation="");


int main() {
  crawl("../");
  return 0;
}


void crawl(int filename, int indentation) {
  // base case
  cout << indentation << getTail(filename) << endl;

  // recursive case
  if (isDirectory(filename)) {
    Vector<string> filelist;
    listDirectory(filename, filelist);

    for (string subfile : filelist) {
      crawl(filename + "/" + subfile, indentation + "    ")
    }
  }
}
