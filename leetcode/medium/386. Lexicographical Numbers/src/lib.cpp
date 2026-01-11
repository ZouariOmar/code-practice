/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-09-2024
 * @link      https://leetcode.com/problems/lexicographical-numbers
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return all the numbers in the range [1, n] sorted in lexicographical order.
 * @param n int
 * @return vector<int>
 */
vector<int> Solution::lexicalOrder(int n) {
  vector<int> ans(n);
  int x{1};

  for (int i{}; i < n; i++) {
    ans[i] = x;
    if (x * 10 > n) {
      if (x == n) x /= 10;
      x++;
      while (x % 10 == 0) x /= 10;
    } else
      x *= 10;
  }

  return ans;
}