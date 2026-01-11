//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  Solution sl;
  std::vector<std::vector<int>> meetings({{2, 4}, {1, 3}});
  std::cout << sl.countDays(5, meetings) << '\n';
  return EXIT_SUCCESS;
}