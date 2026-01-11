/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-20
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/majority-element leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the majority element
 * @details The majority element is the element that appears more than ⌊n / 2⌋ times.
 * You may assume that the majority element always exists in the array.
 * @param arr vector<int> &
 * @return int
 */
int Solution::majorityElement(vector<int> &arr) {
  unordered_map<int, int> mp;

  // Store data in the map
  for (int &it : arr)
    mp[it]++;

  size_t len{arr.size() / 2};  // Half vector size
  for (unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
    if (it->second > len) return it->first;

  return -1;
}