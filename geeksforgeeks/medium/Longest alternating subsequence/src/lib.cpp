/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/longest-alternating-subsequence5951/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Find the longest length of a good sequence. A good sequence {x1, x2, .. xn} is an alternating sequence if its elements satisfy one of the following relations :
 * *
 * - x1 < x2 > x3 < x4 > x5. . . . . and so on
 * *
 * - x1 >x2 < x3 > x4 < x5. . . . . and so on
 * *
 * @param arr
 * @return int
 */
int Solution::alternatingMaxLength(vector<int>& arr) {
  if (arr.size() == 1)
    return 1;

  int maxLength = 1;
  bool is_greater;

  is_greater = arr[0] > arr[1];
  maxLength++; // maxLength = 2

  for (int i = 1; i < arr.size() - 1; i++) {
    if (is_greater && arr[i] < arr[i + 1]) {
      maxLength++;
      is_greater = false;
    } else if (!is_greater && arr[i] > arr[i + 1]) {
      maxLength++;
      is_greater = true;
    }
  }

  return maxLength;
}