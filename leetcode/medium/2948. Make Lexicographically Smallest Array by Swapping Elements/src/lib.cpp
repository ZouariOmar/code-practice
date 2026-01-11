/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-25
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the lexicographically smallest array that can be obtained by performing the operation any number of times.
 *
 * @param nums {vector<int> &}
 * @param limits {int}
 * @return vector<int>
 */
vector<int> Solution::lexicographicallySmallestArray(vector<int> &nums, int limits) {
  size_t len{nums.size()};
  vector<pair<int, int>> graph;

  for (int i{}; i < len; i++)
    graph.push_back({nums[i], i});

  sort(graph.begin(), graph.end());

  vector<vector<pair<int, int>>> groupedPairs;
  groupedPairs.push_back({graph[0]});

  for (int i = 1; i < len; ++i) {
    if (graph[i].first - graph[i - 1].first <= limits)
      groupedPairs.back().push_back(graph[i]);
    else
      groupedPairs.push_back({graph[i]});
  }

  for (const auto &group : groupedPairs) {
    vector<int> indices;
    for (const auto &[value, index] : group)
      indices.push_back(index);

    sort(indices.begin(), indices.end());

    for (size_t i = 0; i < indices.size(); ++i)
      nums[indices[i]] = group[i].first;
  }

  return nums;
}