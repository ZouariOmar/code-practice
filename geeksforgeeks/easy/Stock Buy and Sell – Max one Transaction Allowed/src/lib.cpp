/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-22
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/buy-stock-2/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.
 * @param prices {vector<int> &}
 * @return int
 */
int Solution::maximumProfit(vector<int> &prices) {
  int res{}, minPrice{prices[0]};
  for (int it : prices)
    minPrice = min(minPrice, it), res = max(res, it - minPrice);
  return res;
}