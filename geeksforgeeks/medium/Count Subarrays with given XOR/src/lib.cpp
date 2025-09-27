/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Count the number of subarrays having XOR of their elements as k.
 *
 * @param arr {vector<int> &}
 * @param k int
 * @return long
 */
long Solution::subarrayXor(vector<int> &arr, int k) {
  unordered_map<int, int> mp;
  int preXor{}, count{};
  for (int i{}; i < arr.size(); i++) {
    preXor ^= arr[i];
    if (preXor == k)
      count++;
    if (mp.find(preXor ^ k) != mp.end())
      count += mp[preXor ^ k];
    mp[preXor]++;
  }
  return count;
}