/**
 * @file      helper.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     helper source file
 * @version   0.1
 * @date      2025-04-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <algorithm>

//? Function(s)/Class(es) prototype dev part

/**
 * @fn       Solution::missingNum(std::vector<int> &)
 * @brief     Identify and return the missing element
 * @param arr {vector<int> &}
 * @return    int
 */
int Solution::missingNum(std::vector<int> &arr) {
  std::sort(arr.begin(), arr.end());
  int result(1);
  for (const int &it : arr) {
    if (result != it)
      break;
    result++;
  }
  return result;
}
