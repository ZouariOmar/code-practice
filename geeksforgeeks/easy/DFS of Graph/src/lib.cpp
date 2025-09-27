/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn        Solution::dfsOfGraph(std::vector<std::vector<int>> &)
 * @brief     Function to return a list containing the DFS traversal of the graph.
 * @param adj {std::vector<std::vector<int>> &}
 * @return    std::vector<int>
 */
std::vector<int> Solution::dfsOfGraph(std::vector<std::vector<int>> &adj) {
  std::vector<bool> vis(adj.size(), false);
  std::vector<int> result;
  std::stack<int> s;

  s.push(0);
  while (!s.empty()) {
    int curr(s.top());
    s.pop();
    if (!vis[curr]) {
      int n = adj[curr].size();
      for (int i = n - 1; i >= 0; i--)
        if (!vis[adj[curr][i]])
          s.push(adj[curr][i]);
      result.push_back(curr);
    }
    vis[curr] = true;
  }

  return result;
}
