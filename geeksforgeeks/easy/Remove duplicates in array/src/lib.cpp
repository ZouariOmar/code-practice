/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Remove all duplicate numbers.
 * @param arr vector<int> &
 * @return vector<int>
 */
vector<int> Solution::removeDuplicate(vector<int> &arr) {
  int check[101] = {0};  // Tracks if a number has been seen (2 <= arr[i] <= 100)
  vector<int> ans;       // Result vector for unique elements

  for (int i = 0; i < arr.size(); i++)
    if (check[arr[i]] == 0) {  // If arr[i] is new
      ans.push_back(arr[i]);
      check[arr[i]] = 1;  // Mark arr[i] as seen
    }
  return ans;  // Return vector with duplicates removed
}