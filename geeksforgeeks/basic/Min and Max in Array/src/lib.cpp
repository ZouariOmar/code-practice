/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-09-2024
 * @link      https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return an array that contains two elements the first one will be a minimum element and the second will be a maximum of an array.
 * @param arr vector<long long int>
 * @return pair<long long, long long>
 */
pair<long long, long long> Solution::getMinMax(vector<long long int> arr) {
  sort(arr.begin(), arr.end());
  return {arr[0], arr[arr.size() - 1]};
}