/**
 * @file      1437. Check If All 1's Are at Least Length K Places Away.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1437. Check If All 1's Are at Least Length K Places Away source file
 * @version   0.1
 * @date      2025-11-17
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part

class Solution {
public:
  bool kLengthApart(std::vector<int> &nums, int k) {
    int prev(-1);

    for (size_t i{}, len(nums.size()); i < len; ++i) {
      if (nums[i] == 1) {
        if (prev != -1 && i - prev - 1 < k)
          return false;
        prev = i;
      }
    }

    return true;
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
