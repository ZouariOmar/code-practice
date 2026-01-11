/**
 * @file    1550. Three Consecutive Odds.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   1550. Three Consecutive Odds source file
 * @version 0.1
 * @date    2025-05-11
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/three-consecutive-odds leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool threeConsecutiveOdds(std::vector<int> &arr) {
    unsigned short odds{};
    for (const int &it : arr) {
      (it & 1) ? odds++ : odds = 0;
      if (odds == 3)
        break;
    }
    return (odds == 3);
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
