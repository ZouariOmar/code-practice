/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.geeksforgeeks.org/problems/absolute-difference-11156/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return all the numbers less than k and the number which have at least two digits and
 * the absolute difference between every adjacent digit of that number should be 1 in the array.
 * @param arr vector<int>
 * @param k int
 * @return vector<int>
 */
vector<int> Solution::getDigitDiff1AndLessK(vector<int>& arr, int k) {
  vector<int> res;
  for (int it : arr)
    if (it < k && it > 9 && is_adjacent(it))
      res.push_back(it);
  return res;
}

/**
 * @brief ### Return if the `x` is adjacent
 * @param x int
 * @return true
 * @return false
 */
bool Solution::is_adjacent(int x) {
  string _x{to_string(x)};
  size_t len{_x.size()};
  for (size_t i{}; i < len - 1; i++)
    if (abs(_x[i] - _x[i + 1]) != 1) return false;

  return true;
}