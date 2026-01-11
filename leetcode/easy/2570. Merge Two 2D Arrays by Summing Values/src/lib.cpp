/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function/Class prototype dev part

/**
 * @brief ### Return the resulting array. The returned array must be sorted in ascending order by id.
 *
 * @class        Solution
 * @param nums1 {std::vector<std::vector<int>> &}
 * @param nums2 {std::vector<std::vector<int>> &}
 * @return      std::vector<std::vector<int>>
 */
std::vector<std::vector<int>> Solution::mergeArrays(std::vector<std::vector<int>> &nums1, std::vector<std::vector<int>> &nums2)  {
  std::map<int, int> mp;

  for (const std::vector<int> &vec : nums1) // Add nums1 to `mp`
    mp[vec[0]] += vec[1];

  for (const std::vector<int> &vec : nums2) // Add nums2 to `mp`
    mp[vec[0]] += vec[1];
  
  std::vector<std::vector<int>> result;
  for (const std::pair<int, int> &node : mp)
    result.push_back({node.first, node.second});

  return result;
}