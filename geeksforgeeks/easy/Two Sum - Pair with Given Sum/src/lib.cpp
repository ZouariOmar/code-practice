/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-26
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/key-pair5616/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Determine if there exists two distinct indices such that the sum of there elements is equals to target.
 * @param arr {vector<int> &}
 * @param target {int}
 * @return bool
 */
bool Solution::twoSum(vector<int> &arr, int target) {
  unordered_set<int> st;
  for (int &it : arr) {
    if (st.count(target - it))
      return true;
    st.insert(it);
  }
  return false;
}