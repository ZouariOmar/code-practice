/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Find all the elements occurring more than once in the given array
 *
 * @param arr
 * @return vector<int>
 */
vector<int> Solution::duplicates(vector<long long> arr) {
  // Sorting the array
  sort(arr.begin(), arr.end());

  // Finding duplicates
  vector<int> res;
  size_t len = arr.size() - 1;
  for (int i = 0; i < len; i++)
    if (arr[i] == arr[i + 1])
      res.push_back(arr[i]);
  
  if (res.empty())
    return {-1};

  return res;
}