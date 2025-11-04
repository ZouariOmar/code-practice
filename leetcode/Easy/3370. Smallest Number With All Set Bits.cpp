/**
 * @file      3370. Smallest Number With All Set Bits.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      10/29/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/smallest-number-with-all-set-bits leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int smallestNumber(int n) {
    return (0x8000000000000000 >> (__builtin_clzll(n) - 1)) - 1;
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
