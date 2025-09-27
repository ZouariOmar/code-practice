/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-01
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given an array arr integers. Do the following operation until a single element left.
 * @param arr vector<int>
 * @return int
 */
int Solution::rotateDelete(vector<int> &arr) {
  deque<int> dq(arr.begin(), arr.end());

  for (int k = 1; dq.size() > 1; k++) {
    dq.push_front(dq.back());
    dq.pop_back();

    int removeIndex = dq.size() - k;
    if (removeIndex < 0) removeIndex = 0;
    dq.erase(dq.begin() + removeIndex);
  }

  return dq.front();
}