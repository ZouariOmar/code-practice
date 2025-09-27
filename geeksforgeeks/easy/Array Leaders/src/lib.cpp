/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-07-2024
 * @link      https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Find all the leaders in the array.
 * *
 * - An element of the array is considered a leader if it is greater than all the elements on its right side or if it is equal to the maximum element on its right side.
 * *
 * - The rightmost element is always a leader.
 *
 * @param n
 * @param arr
 * @return vector<int>
 */
vector<int> Solution::leaders(int n, int *arr) {
  int mx = arr[n - 1];
  vector<int> ans;

  // Add the last element of arr array (always leader)
  ans.push_back(mx);

  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < mx)
      continue;
    mx = arr[i];
    ans.push_back(mx);
  }

  // Reverse the answer vector
  reverse(ans.begin(), ans.end());
  return ans;
}