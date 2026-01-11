//! Lance the Doxygen file comment Her (in VSC - `/**↵`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @param argc int
 * @param argv {const char **}
 * @return     int
 */
int main(int argc, const char **args) {
  std::cout << "Hello World !" << std::endl;
  return EXIT_SUCCESS;
}