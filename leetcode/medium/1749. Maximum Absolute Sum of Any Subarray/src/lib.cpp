/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-26
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum absolute sum of any (possibly empty) subarray of nums
 *
 * @class      Solution  
 * @param nums {vector<int> &}
 * @return     int
 */
int Solution::maxAbsoluteSum(vector<int> &nums) {
  int sum{}, maxSum{}, minSum{};
  for (const int &it : nums) {
    sum += it;
    maxSum = max(maxSum, sum);
    minSum = min(minSum, sum);
  }
  return abs(maxSum - minSum);
}