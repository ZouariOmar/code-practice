//! Lance the Doxygen file comment Her (in NVIM - `SPACE+dh`)

//? Include prototype declaration part
#include "helper.cpp"
#include <iostream>

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution sl;
  std::cout << sl.countlargestGroup(13) << '\n';
  return EXIT_SUCCESS;
}
