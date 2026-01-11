//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp" // #include "lib.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Solution sl;
  std::vector<std::vector<int>> arr({{1, 3}, {2, 2}});
  std::vector<int> res = sl.findMissingAndRepeatedValues(arr);

  for (const int &it : res)
    std::cout << it << " ";

  return 0;
}