//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({5, 6, 3, 5, 7, 8, 9, 1, 2});
  cout << sl.lenOfLongIncSubArr(arr) << endl;

  return 0;
}