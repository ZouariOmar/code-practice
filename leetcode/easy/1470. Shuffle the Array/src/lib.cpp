/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-28
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/shuffle-the-array leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the array in the form `[x1,y1,x2,y2,...,xn,yn]`
 * @param arr {vector<int> &}
 * @param n int
 * @return vector<int>
 */
vector<int> Solution::shuffle(vector<int> &arr, int n) {
  vector<int> ans;
  for (size_t i{}; i < n; i++)
    ans.push_back(arr[i]), ans.push_back(arr[i + n]);
  return ans;
}