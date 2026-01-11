/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-24
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-eventual-safe-states leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order
 *
 * @param graph {vector<vector<int>> &}
 * @return vector<int>
 */
vector<int> Solution::eventualSafeNodes(vector<vector<int>> &graph) {
  init(graph);
  queue<int> que;
  for (int i = 0; i < n; i++)
    if (degreein[i] == 0)
      que.push(i);

  while (que.size()) {
    int u = que.front();
    que.pop();
    ans.push_back(u);
    for (int v : rGraph[u]) {
      degreein[v]--;
      if (degreein[v] == 0)
        que.push(v);
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

void Solution::init(vector<vector<int>> &G) {
  n = G.size();
  degreein = vector<int>(n, 0);
  rGraph.resize(n, vector<int>(0));

  for (int u = 0; u < n; u++)
    for (int v : G[u])
      rGraph[v].push_back(u), degreein[u]++;
}