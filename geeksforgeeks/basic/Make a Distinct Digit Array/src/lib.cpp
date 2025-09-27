/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/make-a-distinct-digit-array2007/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find all distinct digits present in nums.
 *
 * @param nums vector<int>
 * @return vector<int>
 */
vector<int> Solution::common_digits(vector<int> nums) {
  set<int> ans; // Answer set (to_vector)
  for (int &it : nums)
    while (it > 0)
      ans.insert(it % 10), it /= 10;
  return vector<int>(ans.begin(), ans.end());
}
