#include <iostream>
using namespace std;

int binarySearch(vector<int>& v, int value, int start, int end) {
  if (start > end) {
    return -1;
  }

  int mid = (end - start) / 2 + start;

  if (value == v[mid]) {
    return mid;
  } else if (value < v[mid]) {
    return binarySearch(v, value, start, mid - 1);
  } else {
    return binarySearch(v, value, mid + 1, end);
  }
}



int main(int argc, char const *argv[]) {
  vector<int> v;
  v.push_back(12);
  v.push_back(23);
  v.push_back(34);
  v.push_back(45);
  v.push_back(56);
  v.push_back(67);
  v.push_back(78);
  binarySearch(v, 34, 0, v.size() - 1);
  return 0;
}
