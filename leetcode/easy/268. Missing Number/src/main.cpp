//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({9, 6, 4, 2, 3, 5, 7, 0, 1});

  cout << sl.missingNumber(arr) << endl;

  return 0;
}