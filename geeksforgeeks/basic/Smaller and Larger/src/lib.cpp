/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-09-2024
 * @link      https://www.geeksforgeeks.org/problems/smaller-and-larger4005/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### return an array of size 2. The first value is the number of elements less than or equal to x,
 * and the second value is the number of elements greater than or equal to x.
 * @param arr vector<int>
 * @param x int
 * @return vector<int>
 */
vector<int> Solution::getMoreAndLess(vector<int> &arr, int x) {
  vector<int> res(2);
  for (int it : arr) {
    if (it <= x)
      res[0]++;
    if (it >= x)
      res[1]++;
  }

  return res;
}