/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/next-greater-element-i leetcode @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <stack>
#include <unordered_map>

//? Function(s)/Class(es) prototype dev part

/**
 * @fn    Solution::nextGreaterElement(std::vector<int> &, std::vector<int> &)
 * @brief Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
 *
 * @param nums1 {std::vector<int> &}
 * @param nums2 {std::vector<int> &}
 *
 * @return std::vector<int>
 */
std::vector<int> Solution::nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2) {
  std::vector<int> ans;
  std::unordered_map<int, int> ex;
  std::stack<int> s;
  for (int i = nums2.size() - 1; i >= 0; i--) {
    while (!s.empty() && nums2[i] > s.top())
      s.pop();

    ex[nums2[i]] = s.empty() ? -1 : s.top();
    s.push(nums2[i]);
  }
  for (auto &i : nums1)
    ans.push_back(ex[i]);

  return ans;
}
