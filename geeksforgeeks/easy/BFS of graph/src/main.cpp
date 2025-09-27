//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp" // #include "lib.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @param argc int
 * @param argv char const **
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Solution sl;
  vector<vector<int>> arr({{2, 3, 1}, {0}, {0, 4}, {0}, {2}});
  vector<int> res = sl.bfsOfGraph(arr);

  for (int &it : res)
    cout << it << " ";
  return 0;
}