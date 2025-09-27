/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn        Solution::pushZerosToEnd(std::vector<int> &)
 * @brief     Move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements
 * @param arr {std::vector<int> &}
 * @return    void
 */
void Solution::pushZerosToEnd(std::vector<int> &arr) {
  for (int i{}, j{}; i < arr.size(); i++) {
    if (arr[j])
      j++;
    else if (arr[i])
      std::swap(arr[i], arr[j++]);
  }
}