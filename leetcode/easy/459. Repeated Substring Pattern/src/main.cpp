/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/repeated-substring-pattern leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"  

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution sl;
  std::cout << std::boolalpha << sl.repeatedSubstringPattern("aba");
  return EXIT_SUCCESS;
}