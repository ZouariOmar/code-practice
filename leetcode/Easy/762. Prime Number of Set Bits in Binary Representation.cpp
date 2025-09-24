/**
 * @file      762. Prime Number of Set Bits in Binary Representation.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     762. Prime Number of Set Bits in Binary Representation source file
 * @version   0.1
 * @date      17/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countPrimeSetBits(int left, int right) {
    int ans{};
    for (int i(left); i <= right; ++i) {
      int bits(__builtin_popcount(i));
      if (bits == 2 || bits == 3 || bits == 5 || bits == 7 || bits == 11 || bits == 13 || bits == 17 || bits == 19)
        ++ans;
    }
    return ans;
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
