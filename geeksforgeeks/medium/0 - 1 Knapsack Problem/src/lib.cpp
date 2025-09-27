/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### find out the maximum sum values subset of val[] such that the sum of the weights of the corresponding subset is smaller than or equal to W.
 *
 * @param W
 * @param wt
 * @param val
 * @return int
 */
int Solution::knapSack(int W, vector<int>& wt, vector<int>& val) {
  int res{};
  int maxWT{};
  size_t len{wt.size()};

  for (size_t i{}; i < len; i++) {
    if (wt[i] > W) continue;
    if (maxWT < wt[i] + maxWT && wt[i] + maxWT <= W) {
      maxWT = wt[i] + maxWT;
      res += val[i];
    } else if (val[i] > res) {
      maxWT = wt[i];
      res = val[i];
    }
  }
  return res;
}