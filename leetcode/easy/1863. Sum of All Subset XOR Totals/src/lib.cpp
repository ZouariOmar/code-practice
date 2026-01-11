/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/sum-of-all-subset-xor-totals leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn         Solution::subsetXORSum(std::vector<int> &)
 * @brief      Return the sum of all XOR totals for every subset of `nums`.
 * @param nums {std::vector<int> &}
 * @return     int
 */
int Solution::subsetXORSum(std::vector<int> &nums) {
  int bitOr{};
  for (const int &it : nums)
    bitOr |= it;
  return bitOr * (1 << (nums.size() - 1));
}