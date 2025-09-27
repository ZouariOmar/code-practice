//! Lance the Doxygen file comment Her (in VSC - `/**↵`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::vector<int> arr({1, 1, 2, 2, 2, 2, 3});
  Solution sl;
  std::cout << sl.countFreq(arr, 4) << '\n';
  return EXIT_SUCCESS;
}