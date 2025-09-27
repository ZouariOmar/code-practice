/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/triplet-family/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find whether three numbers are such that the sum of two elements equals the third element. 
 * @param arr vector<int> &
 * @return true or false
 */
bool Solution::findTriplet(vector<int> &arr) {
  size_t len{arr.size()};        // Size of the array
  sort(arr.begin(), arr.end());  // Sort the vector in ascending order
  for (size_t k{len - 1}; k >= 2; k--) {
    size_t i{};
    size_t j{k - 1};
    while (i < j) {
      int sum = arr[i] + arr[j];
      if (sum == arr[k])
        return true;
      else if (sum < arr[k])
        i++;
      else
        j--;
    }
  }
  return false;
}