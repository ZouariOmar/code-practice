//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Solution sl;
  std::vector<int> g({1, 2, 3}), s({1, 1});
  std::cout << sl.findContentChildren(g, s) << '\n';
  return EXIT_SUCCESS;
}