//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lin.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @param argc int
 * @param argv char const **
 * @return int
 */
int main(int argc, char const *argv[]) {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({10, 40, 23, 35, 50, 7});

  cout << sl.countElements(arr) << endl;

  return 0;
}