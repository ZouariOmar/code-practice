/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array `result` of length `n`, where `result[i]` denotes the number of distinct colors after ith query.
 *
 * @param limit int
 * @param queries {vector<vector<int>> &}
 * @return vector<int>
 */
vector<int> Solution::queryResults(int limit, vector<vector<int>> &queries) {
  vector<int> result;
  unordered_map<int, int> ballsRg, colorCount;
  for (const vector<int> &query : queries) {
    const int ball = query[0], color = query[1];
    if (const unordered_map<int, int>::iterator it = ballsRg.find(ball); it != ballsRg.cend()) {
      const int prevColor = it->second;
      if (--colorCount[prevColor] == 0)
        colorCount.erase(prevColor);
    }
    ballsRg[ball] = color, ++colorCount[color];
    result.push_back(colorCount.size());
  }
  return result;
}
