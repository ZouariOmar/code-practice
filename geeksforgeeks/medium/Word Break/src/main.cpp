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
  std::vector<std::string> arr({"i", "like", "gfg"});
  std::string s("ilike");
  std::cout << sl.wordBreak(s, arr) << '\n';
  return 0;
}