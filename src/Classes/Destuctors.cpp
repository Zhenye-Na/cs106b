/*
 * For example
 */

ArrayStack::ArrayStack() {
  elements = new int[10]();  // default filled with 0
  size = 0;
  capacity = 0;
}


ArrayStack::~ArrayStack() {
  delete[] elements;
}
