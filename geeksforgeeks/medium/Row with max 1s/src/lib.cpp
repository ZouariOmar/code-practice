/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-27-2024
 * @link      https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the 0-based index of the first row that has the most number of 1s. If no such row exists, return -1.
 *
 * @param arr
 * @return int
 */
int Solution::rowWithMax1s(vector<vector<int>> &arr) {
  int counter = 0;
  int res = -1;

  size_t len = arr.size();
  for (int i = 0; i < len; i++) {
    int tmp = count(arr[i].begin(), arr[i].end(), 1);
    if (tmp > counter) {
      counter = tmp;
      res = i;
    }
  }

  return res;
}