/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the maximum distance between two occurrences of an element.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::maxDistance(vector<int> &arr) {
  unordered_map<int, int> memo;
  int ans{-1};
  size_t n{arr.size()};
  // {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
  for (int i = 0; i < n; i++)
    (memo.find(arr[i]) == memo.end()) ? memo[arr[i]] = i + 1 : ans = max(ans, abs(i + 1 - memo[arr[i]]));
  return ans;
}

/**
 * @brief ### Find the maximum distance between two occurrences of an element.
 * ! Your program took more time than expected.Expected Time Limit : 2.33sec
 * @param arr {vector<int> &}
 * @return int
int Solution::maxDistance(vector<int> &arr) {
  int res{};
  size_t len{arr.size()};
  for (size_t i{}; i < len; i++) {
    auto it = find_if(arr.rbegin(), arr.rend(), [&arr, i](int last_i) {
      return arr[i] == last_i;
    });

    // Convert reverse iterator to regular index
    int last_index = len - 1 - distance(arr.rbegin(), it);

    // Calculate the distance and update the result
    res = max(res, last_index - static_cast<int>(i));
  }

  return res;
}
 */
