/**
 * @file      3100. Water Bottles II.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3100. Water Bottles II source file
 * @version   0.1
 * @date      10/02/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/water-bottles-ii leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxBottlesDrunk(int numBottles, int numExchange) {
    int res(numBottles);
    while (numBottles >= numExchange)
      numBottles -= numExchange - 1, ++numExchange, ++res;
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
