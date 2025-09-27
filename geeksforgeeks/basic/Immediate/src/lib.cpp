/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-08-2024
 * @link      https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

void Solution::immediateSmaller(vector<int> &arr, int n) {
  int i{};
  while (i < n - 1) {
    if (arr[i] > arr[i + 1])
      arr[i] = arr[i + 1];
    else
      arr[i] = -1;
    i++;
  }
  arr[n - 1] = -1;
}