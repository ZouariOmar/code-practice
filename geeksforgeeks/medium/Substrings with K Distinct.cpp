/**
 * @file    Substrings with K Distinct.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Substrings with K Distinct source file
 * @version 0.1
 * @date    2025-06-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countSubstr(std::string &s, int k) {
    int result{};
    for (size_t i{}, len(s.length()); i < len; i++) {
      int distinct{}, freq[26]{};
      for (size_t j(i); j < len; j++) {
        if (!freq[s[j] - 'a']++)
          distinct++;
        if (distinct == k)
          result++;
        if (distinct > k)
          break;
      }
    }
    return result;
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
