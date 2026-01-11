/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/target-sum leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of different expressions that you can build, which evaluates to target
 * @param arr {vector<int> &}
 * @param target {int}
 * @return int
 */
int Solution::findTargetSumWays(vector<int> &arr, int target) {
  return helper(arr, target, 0, 0);
}

/**
 * @brief ### Help the Solution::findTargetSumWays fn
 * @param arr {const vector<int> &}
 * @param target {const int}
 * @param idx {int}
 * @param sum {int}
 * @return int
 */
int Solution::helper(const vector<int> &arr, const int target, int idx, int sum) {
  if (idx >= arr.size())
    return sum == target;
  return helper(arr, target, idx + 1, sum - arr[idx]) + helper(arr, target, idx + 1, sum + arr[idx]);
}