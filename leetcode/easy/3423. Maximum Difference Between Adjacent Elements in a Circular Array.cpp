/**
 * @file    3423. Maximum Difference Between Adjacent Elements in a Circular Array.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   3423. Maximum Difference Between Adjacent Elements in a Circular Array source file
 * @version 0.1
 * @date    2025-06-12
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxAdjacentDistance(std::vector<int> nums) {
    size_t len{nums.size()};
    int result{-100};
    for (size_t i{}; i < len - 1; i++)
      result = std::max(result, std::abs(nums[i] - nums[i + 1]));
    return std::max(result, std::abs(nums[0] - nums[len - 1]));
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
