/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      31-07-2024
 * @link      https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the second largest distinct element from an array.
 * *
 * - If the second largest element doesn't exist then return -1.
 *
 * @param arr
 * @return int
 */
int Solution::print2largest(vector<int> &arr) {
  // Store the length of the array
  size_t len = arr.size();

  // Return the result if the length of the array is one
  if (len == 1)
    return arr[0];

  // Sort the array
  sort(arr.begin(), arr.end());

  // Second largest number doesn't exist
  if (arr[0] == arr[len - 1])
    return -1;
  
  // Return the second  largest number in the array (100% exist)
  for (int i = len - 2; i >= 0; i--)
    if (arr[i] != arr[len - 1])
      return arr[i];

  return -1;
}