//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  vector<vector<int>> grid = {
      {1, 1, 3},
      {3, 2, 2},
      {1, 1, 4}};
  Solution sl;

  cout << sl.minCost(grid) << endl;
  return 0;
}