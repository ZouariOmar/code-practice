/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-30
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?page=2&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to return Breadth First Traversal of given graph.
 *
 * @param graph {vector<vector<int>> &}
 * @return vector<int>
 */
vector<int> Solution::bfsOfGraph(vector<vector<int>> &graph) {
  int len = graph.size();
  vector<int> visted(len, 0), ans;
  queue<int> q;
  q.push(0), visted[0] = 1;

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    ans.push_back(node);
    for (const int &it : graph[node])
      if (!visted[it])
        q.push(it), visted[it] = 1;
  }

  return ans;
}