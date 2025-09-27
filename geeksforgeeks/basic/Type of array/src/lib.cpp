/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-07
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/type-of-array4605/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the type of array.
 * *
 * - #### Return 1 if the array is in ascending order
 * *
 * - #### Return 2 if the array is in descending order
 * *
 * - #### Return 3 if the array is in descending rotated order
 * *
 * - #### Return 4 if the array is in ascending rotated order
 * @param arr vector<int> &
 * @return int
 */
int Solution::maxNtype(vector<int> &arr) {
  int asc{}, dsc{};
  size_t len{arr.size()};  // Sizeof `arr` vector
  for (size_t i{}; i < len - 1; i++)
    (arr[i] > arr[i + 1]) ? asc++ : dsc++;

  if (!asc) return 1;
  if (!dsc) return 2;
  return (asc >= dsc) ? 3 : 4;
}