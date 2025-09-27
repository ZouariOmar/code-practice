/**
 * @file      Repetitive Addition Of Digits.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Repetitive Addition Of Digits source file
 * @version   0.1
 * @date      09/24/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/repetitive-addition-of-digits2221 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int singleDigit(int n) {
    int res = n % 9;
    return res ? res : 9;
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
