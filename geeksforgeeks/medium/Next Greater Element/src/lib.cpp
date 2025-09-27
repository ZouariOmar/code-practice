/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-22
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to find the next greater element for each element of the array
 *
 * @param arr {vector<int> &}
 * @return vector<int>
 */
vector<int> Solution::nextLargerElement(vector<int> &arr) {
  vector<int> ans;
  stack<int> stk;
  for (vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); it++) {
    while (!stk.empty() && *it >= stk.top())
      stk.pop();
    (stk.empty()) ? ans.push_back(-1) : ans.push_back(stk.top());
    stk.push(*it);
  }
  reverse(ans.begin(), ans.end());
  return ans;
}