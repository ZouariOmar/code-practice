/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-12
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/single-number leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the unique element
 * @param nums {vector<int> &}
 * @return int
 */
int Solution::singleNumber(vector<int> &nums) {
  unordered_map<int, int> mp;
  size_t len{nums.size()};

  for (int &it : nums)
    mp[it]++;

  for (auto &it : mp)
    if (it.second == 1) return it.first;

  return -1;
}

/*
* Other solution
//using XOR method
int ans{};
for(int &it : nums)
    ans ^= it;
return ans;
*/