/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-18
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/elements-before-which-no-element-is-bigger0602/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

int Solution::countElements(vector<int> &arr) {
  int count = 1, prev = arr[0];
  for (int &it : arr)
    if (prev < it) 
      count++, prev = it;
  return count;
}