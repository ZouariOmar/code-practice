/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/best-time-to-buy-and-sell-stock leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::maxProfit(vector<int> &arr) {
  int res{}, minPrice{arr[0]};
  for (int it : arr) {
    minPrice = min(minPrice, it);
    res = max(res, it - minPrice);
  }
  return res;
}