/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-08-2024
 * @link      https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given a sorted array arr and an integer k, find the position(0-based indexing) at which k is present in the array using binary search.
 * @param arr
 * @param k
 * @return int
 */
int Solution::binarysearch(vector<int> &arr, int k) {
  size_t start{}, end{arr.size() - 1}, middle{(end + start) / 2};

  while (end >= start) {
    if (k == arr[middle]) return middle;
    (k > arr[middle]) ? (start = middle + 1) : (end = middle - 1);
    middle = (start + end) / 2;
  }

  return -1;
}
