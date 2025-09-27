/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-31
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to return length of longest subsequence of consecutive integers.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::longestConsecutive(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  int ans{1}, current{1}, len = arr.size();
  for (int i{}; i < len - 1; ++i) {
    if (arr[i] == arr[i + 1])
      continue;
    else if (arr[i] == arr[i + 1] - 1)
      current++;
    else
      ans = max(ans, current), current = 1;
  }
  ans = max(ans, current);
  return ans;
}