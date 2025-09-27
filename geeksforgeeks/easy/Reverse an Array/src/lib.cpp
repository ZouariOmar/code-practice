/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-17
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/reverse-an-array/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse the given array.
 * @param arr `vector<int> &`
 */
void Solution::reverseArray(vector<int> &arr) {
  reverse(arr.begin(), arr.end());
}