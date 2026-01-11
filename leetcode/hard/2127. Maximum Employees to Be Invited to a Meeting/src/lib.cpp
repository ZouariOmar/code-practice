/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-26
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum number of employees that can be invited to the meeting
 *
 * @param fav {vector<int> &}
 * @return int
 */
int Solution::maximumInvitations(vector<int> &fav) {
  int n = fav.size();
  vector<int> inDeg(n, 0), depth(n, 1);

  // === RIP Mr.Slim Moalla (25 Jan 2025) ===

  for (int i{}; i < n; ++i)
    inDeg[fav[i]]++;

  queue<int> q;
  for (int i{}; i < n; ++i)
    if (inDeg[i] == 0)
      q.push(i);

  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    int nxt = fav[cur];
    depth[nxt] = max(depth[nxt], depth[cur] + 1);
    if (--inDeg[nxt] == 0)
      q.push(nxt);
  }

  int maxCycle{}, twoCycleSum{};
  for (int i{}; i < n; ++i) {
    if (inDeg[i] == 0)
      continue;
    int len{}, cur = i;
    while (inDeg[cur] != 0) {
      inDeg[cur] = 0;
      len++;
      cur = fav[cur];
    }
    (len == 2) ? twoCycleSum += depth[i] + depth[fav[i]] : maxCycle = max(maxCycle, len);
  }
  return max(maxCycle, twoCycleSum);
}