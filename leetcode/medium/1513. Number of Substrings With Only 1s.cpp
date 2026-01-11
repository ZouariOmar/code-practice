/**
 * @file      1513. Number of Substrings With Only 1s.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1513. Number of Substrings With Only 1s source file
 * @version   0.1
 * @date      2025-11-16
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/number-of-substrings-with-only-1s leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int numSub(std::string s) {
    int res{}, n{}, mod(1e9 + 7);

    for (const char &c : s) {
      n = c == '1' ? n + 1 : 0;
      res = (res + n) % mod;
    }

    return res;
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
