/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-21
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/stock-buy-and-sell2615/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximument profit from day `0` to `n`
 * ? containets
 * - 0 <= prices[i] <= 10^4
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::maximumProfit(vector<int> &arr) {
  int res{}, minPrice{arr[0]}, maxPrice{arr[0]};
  for (int &it : arr) {
    if (it > minPrice && it > maxPrice)
      maxPrice = it;
    else
      res += maxPrice - minPrice, maxPrice = minPrice = it;
  }
  return res += maxPrice - minPrice, res;
}

/*
* Other Solution
class Solution {
public:
    int stockBuyAndSell(int n, int price[]) {
        int profit = 0;
        for (int i = 1; i < n; i++) {
            if (price[i] > price[i - 1])
                profit += price[i] - price[i - 1];
        }
        return profit;
    }
};
*/