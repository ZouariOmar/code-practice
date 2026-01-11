/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-10
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/summary-ranges leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the smallest sorted list of ranges that cover all the numbers in the array exactly.
 * That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such
 * that x is in one of the ranges but not in nums.
 * @param arr vector<int> &
 * @return vector<string>
 */
vector<string> Solution::summaryRanges(vector<int> &arr) {
  size_t n{arr.size()};
  vector<string> ans;

  if (!n) return ans;  // If `arr` is empty

  long long int start = arr[0];
  long long int end = arr[0];

  for (size_t i = 1; i < n; i++) {
    if ((long long int)arr[i] - end == 1)
      end = arr[i];
    else {
      string tmp = to_string(start);
      if (start != end) tmp += "->" + to_string(end);
      ans.push_back(tmp), start = arr[i], end = arr[i];
    }
  }

  string tmp = to_string(start);
  if (start != end) tmp += "->" + to_string(end);
  return ans.push_back(tmp), ans;
}