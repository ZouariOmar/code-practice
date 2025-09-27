/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/common-elements1132/1?page=1&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::commonElements(std::vector<int> &, std::vector<int> &, std::vector<int> &)
 *
 * @brief Function to find common elements in three arrays
 *
 * @param arr1 {std::vector<int> &}
 * @param arr2 {std::vector<int> &}
 * @param arr3 {std::vector<int> &}
 *
 * @return std::vector<int>
 */
std::vector<int> Solution::commonElements(std::vector<int> &arr1, std::vector<int> &arr2, std::vector<int> &arr3) {
  size_t i{}, j{}, k{}, arr1_len(arr1.size());
  std::vector<int> result;
  while (i < arr1_len) {
    while (i + 1 < arr1_len && arr1[i] == arr1[i + 1])
      i++;
    while (j < arr2.size() && arr2[j] < arr1[i])
      j++;
    while (k < arr3.size() && arr3[k] < arr1[i])
      k++;
    if (j < arr2.size() && k < arr3.size() && arr1[i] == arr2[j] && arr1[i] == arr3[k])
      result.push_back(arr1[i]), j++, k++;
    i++;
  }
  return result;
}