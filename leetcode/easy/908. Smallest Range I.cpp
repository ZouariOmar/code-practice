/**
 * @file      908. Smallest Range I.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     908. Smallest Range I source file
 * @version   0.1
 * @date      2025-11-26
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/smallest-range-i leetcode @endlink
 */

//? Include prototype declaration part
#include <climits>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int smallestRangeI(std::vector<int> &nums, int k) {
    int smallest(INT_MAX), largest(INT_MIN);

    for (int i = 0; i < nums.size(); i++) {
      smallest = std::min(nums[i], smallest);
      largest = std::max(nums[i], largest);
    }

    if (largest - smallest - 2 * k <= 0 || nums.size() == 1)
      return 0;
    return (largest - smallest - 2 * k);
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
