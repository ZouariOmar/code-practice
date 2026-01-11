/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-29
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/redundant-connection leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an edge that can be removed so that the resulting graph is a tree of `n` nodes. If there are multiple answers, return the answer that occurs last in the input.
 *
 * @param edges {vector<vector<int>> &}
 * @return vector<int>
 */
vector<int> Solution::findRedundantConnection(vector<vector<int>> &edges) {
  unordered_map<int, vector<int>> graph;

  auto isConnected = [&](int u, int v) {
    unordered_set<int> visited;
    stack<int> stack;
    stack.push(u);

    while (!stack.empty()) {
      int node = stack.top();
      stack.pop();

      if (visited.count(node))
        continue;
      visited.insert(node);

      if (node == v)
        return true;

      for (int neighbor : graph[node])
        stack.push(neighbor);
    }
    return false;
  };

  for (const auto &edge : edges) {
    int u = edge[0], v = edge[1];

    if (graph.count(u) && graph.count(v) && isConnected(u, v))
      return edge;

    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  return {};
}