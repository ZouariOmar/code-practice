/**
 * @file      905. Sort Array By Parity.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     905. Sort Array By Parity source file
 * @version   0.1
 * @date      2025-11-20
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/sort-array-by-parity leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> sortArrayByParity(std::vector<int> &nums) {
    size_t l{}, h(nums.size() - 1);
    while (l < h) {
      if ((nums[l] & 1) > (nums[h] & 1)) {
        nums[l] ^= nums[h];
        nums[h] ^= nums[l];
        nums[l] ^= nums[h];
      }
      if (!(nums[l] & 1))
        ++l;
      if (nums[h] & 1)
        --h;
    }
    return nums;
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
