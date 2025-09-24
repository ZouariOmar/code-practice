/**
 * @file      747. Largest Number At Least Twice of Others.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     747. Largest Number At Least Twice of Others source file
 * @version   0.1
 * @date      14/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/largest-number-at-least-twice-of-others leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int dominantIndex(std::vector<int> &nums) {
    int res(-1), second_max(-1), res_idx(-1);
    for (size_t i{}, len(nums.size()); i < len; ++i) {
      if (nums[i] > res) {
        second_max = res;
        res = nums[i];
        res_idx = i;
      } else if (nums[i] > second_max) {
        second_max = nums[i];
      }
    }
    return (res >= second_max * 2) ? res_idx : -1;
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
