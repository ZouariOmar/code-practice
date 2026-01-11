/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-31
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/contains-duplicate leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.
 * @param arr vector<int> &
 * @return true or false
 */
bool Solution::containsDuplicate(vector<int> &arr) {
  // Track the duplicates of arr using the u_map
  unordered_map<int, short> mp;
  for (int &it : arr)
    mp[it]++;
  for (unordered_map<int, short>::iterator it = mp.begin(); it != mp.end(); it++)
    if (it->second > 1) return true;  // There is a duplicated number
  return false;                       // Test passed ==> very element is distinct in `arr`
}

/*
* Other solution
sort(nums.begin(), nums.end());
for(int i = 1;i < nums.size();i++)
    if(nums[i-1] == nums[i]) return true;

return false;
*/