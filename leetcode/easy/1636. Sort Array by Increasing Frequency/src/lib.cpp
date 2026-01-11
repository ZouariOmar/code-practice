/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://leetcode.com/problems/sort-array-by-increasing-frequency
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Sort the array in increasing order based on the frequency of the values.
 *
 * @param nums
 * @return vector<int>
 */
vector<int> Solution::frequencySort(vector<int> &nums) {
  int freq[201] = {};
  for (int num : nums)
    freq[num + 100]++;
  sort(nums.begin(), nums.end(), [&freq](int a, int b) {
    return freq[a + 100] == freq[b + 100] ? a > b : freq[a + 100] < freq[b + 100];
  });
  return nums;
}