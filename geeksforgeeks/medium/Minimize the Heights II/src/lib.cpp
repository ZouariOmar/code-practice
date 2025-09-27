/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-09-2024
 * @link      https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : _min(INT_MIN), _max(INT_MAX) {
}

/**
 * @brief ### Find out the minimum possible difference between the height
 * of the shortest and tallest towers after you have modified each tower.
 * @param arr vector<int>
 * @param k int
 * @return int
 */
int Solution::getMinDiff(vector<int> &arr, int k) {
  size_t n{arr.size()};
  sort(arr.begin(), arr.end());
  int res = arr[n - 1] - arr[0];

  for (int i{1}; i < n; i++) {
    if (arr[i] > k) {
      _max = max(arr[i - 1] + k, arr[n - 1] - k);
      _min = min(arr[0] + k, arr[i] - k);
      res = min(res, _max - _min);
    }
  }
  return res;
}