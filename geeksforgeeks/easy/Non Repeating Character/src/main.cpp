//! Lance the Doxygen file comment Her (in NVIM - `SPACE+dh`)

//? Include prototype declaration part
#include "helper.cpp" // #include "helper.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @param argc int
 * @param argv {const char **}
 * @return     int
 */
int main(int argc, const char **args) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
