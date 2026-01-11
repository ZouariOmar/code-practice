/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/count-number-of-nice-subarrays/description
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------
/**
 * @brief Fiend the nice sub-arrays
 * @param nums
 * @param k
 * @return int
 */
int Solution::numberOfSubarrays(vector<int>& nums, int k) {
  int count = 0, prefix_sum = 0;
  unordered_map<int, int> prefix_count;
  prefix_count[0] = 1;

  for (int num : nums) {
    // Convert num to binary (1 if odd, 0 if even)
    prefix_sum += (num % 2);

    if (prefix_count.find(prefix_sum - k) != prefix_count.end())
      count += prefix_count[prefix_sum - k];

    //* Update the count of the current prefix_sum in the hashmap
    prefix_count[prefix_sum]++;
  }

  return count;
};