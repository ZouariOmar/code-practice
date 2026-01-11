//! Lance the Doxygen file comment Her (in VSC - `/**↵`)

//? Include prototype declaration part
#include "lib.cpp" // #include "lib.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::vector<std::vector<int>> arr({{3, 2}, {4, 3}, {4, 4}, {2, 5}});
  Solution sl;
  std::cout << sl.mostPoints(arr);
  return EXIT_SUCCESS;
}