/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-24
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/bubble-sort/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to sort the array using bubble sort algorithm
 *
 * @class     Solution
 * @param arr {std::vector<int> &}
 */
void Solution::bubbleSort(std::vector<int> &arr) {
  for (int i{}, len = arr.size(); i < len - 1; i++) {
    bool is_swap{};
    for (int j{}; j < len - i - 1; j++) 
      if (arr[j] > arr[j + 1])
        std::swap(arr[j], arr[j + 1]), is_swap = true;
    if (!is_swap)
      break;
  }
}