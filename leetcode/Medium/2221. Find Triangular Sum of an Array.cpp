/**
 * @file      2221. Find Triangular Sum of an Array.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     2221. Find Triangular Sum of an Array source file
 * @version   0.1
 * @date      09/30/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/find-triangular-sum-of-an-array leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int triangularSum(std::vector<int> &nums) {
    size_t n(nums.size());
    for (size_t i{}, len(nums.size()); i < len; ++i) {
      for (size_t j{}; j < n - 1; ++j)
        nums[j] += nums[j + 1], nums[j] %= 10;
      --n;
    }
    return nums[0];
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
