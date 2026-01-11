/**
 * @file      3477. Fruits Into Baskets II.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3477. Fruits Into Baskets II source file
 * @version   0.1
 * @date      08/05/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/fruits-into-baskets-ii leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part

class Solution {
public:
  int numOfUnplacedFruits(std::vector<int> &fruits, std::vector<int> &baskets) {
    int result{};
    for (const int &fruit : fruits) {
      bool isPlaced{};
      for (int &backet : baskets) {
        if (fruit <= backet) {
          backet = -1, isPlaced = true;
          break;
        }
      }
      if (!isPlaced)
        ++result;
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
