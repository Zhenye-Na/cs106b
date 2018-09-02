/*
 * this will work when you call like
 * "cout << stack << endl;"
 * It will print all the elements in your stack according to
 * your toString() function's implementation
 */


ostream& operator <<(ostream& out, Typename& name) {
  out << name.toString();
  return out;
}
