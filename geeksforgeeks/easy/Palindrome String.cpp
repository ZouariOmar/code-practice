/**
 * @file    Palindrome String.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Palindrome String source file
 * @version 0.1
 * @date    2025-05-12
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/palindrome-string geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool isPalindrome(std::string &s) {
    size_t i{}, j(s.length() - 1);
    while (i <= j) {
      if (s[i] != s[j])
        return false;
      i++, j--;
    }
    return true;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
