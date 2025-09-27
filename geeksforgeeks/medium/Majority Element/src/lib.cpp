/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-08-2024
 * @link      https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::majorityElement(int *arr, int size) {
  if (size == 1) return arr[0];
  unordered_map<int, int> mp;
  int res{}, count{};

  for (int i{}; i < size; i++) {
    mp[arr[i]]++;
    if (mp[arr[i]] > count) {
      count = mp[arr[i]];
      res = arr[i];
    }
  }

  if (count > size / 2)
    return res;

  return -1;
}