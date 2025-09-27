/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/find-unique-element2632/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given an array of elements occurring in multiples of k, except one element which doesn't occur in multiple of k. Return the unique element.
 * @param k {int}
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::findUnique(int k, vector<int> &arr) {
  size_t len{arr.size()};

  unordered_map<int, int> mp;
  for (size_t i{}; i < arr.size(); i++)
    mp[arr[i]]++;

  for (size_t i{}; i < len; i++)
    if (mp[arr[i]] < k) return arr[i];

  return -1;
}