/*
 * Merge Sort
 */

void mergeSort(Vector<int>& v) {

  if (v.size() <= 1) {
    return;
  } else {
    // split data into two halves.
    Vector<int> left  = v.subList(0, v.size() / 2);
    Vector<int> right = v.subList(v.size() / 2, v.size() - left.size());

    // sort the halves
    mergeSort(left);
    mergeSort(right);

    // merge tohether
    // merge(left, right);

    int i1 = 0;
    int i2 = 0;

    while ()



  }

}
