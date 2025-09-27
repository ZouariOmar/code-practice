/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-27
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to search x in arr
 * @param arr {vector<int> &} - input array
 * @param x {int} - element to be searched for
 * @return int
 */
int Solution::search(vector<int> &arr, int x) {
  for (int i{}; i < arr.size(); i++)
    if (arr[i] == x)
      return i;
  return -1;
}