/**
 * @file      746. Min Cost Climbing Stairs.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     746. Min Cost Climbing Stairs source file
 * @version   0.1
 * @date      09/10/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/min-cost-climbing-stairs leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int minCostClimbingStairs(std::vector<int> &cost) {
    size_t n(cost.size());
    int *dp(new int[n]);
    for (size_t i{}; i < n; i++)
      dp[i] = (i < 2) ? cost[i] : cost[i] + std::min(dp[i - 1], dp[i - 2]);
    int res(std::min(dp[n - 1], dp[n - 2]));
    delete[] dp;
    return res;
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
