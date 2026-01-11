/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-ways-to-arrive-at-destination leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of ways you can arrive at your destination in the shortest amount of time
 *
 * @details     Since the answer may be large, return it modulo `10^9 + 7`.
 * @class       Solution
 * @param n     int
 * @param roads {std::vector<std::vector<int>> &}
 * @return      int
 */
int Solution::countPaths(int n, std::vector<std::vector<int>> &roads) {
  std::vector<std::vector<pll>> graph(n);
  for (const std::vector<int> &road : roads)
    graph[road[0]].push_back({road[1], road[2]}), graph[road[1]].push_back({road[0], road[2]});

  return dijkstra(graph, n, 0);
}

/**
 * @brief ### Dijkstra algo to find the shortest path
 *
 * @class       Solution
 * @param graph {const std::vector<std::vector<pll>> &}
 * @param n     {const int &}
 * @param src   {const int &}
 * @return      {const int}
 */
const int Solution::dijkstra(const std::vector<std::vector<pll>> &graph, const int &n, const int &src) {
  std::vector<ll> dist(n, LONG_MAX), ways(n);
  ways[src] = 1, dist[src] = 0;
  std::priority_queue<pll, std::vector<pll>, std::greater<>> minHeap;
  minHeap.push({0, 0}); // dist, src
  while (!minHeap.empty()) {
    auto [d, u] = minHeap.top();
    minHeap.pop();
    if (d > dist[u])
      continue;
    for (auto [v, time] : graph[u]) {
      if (dist[v] > d + time) {
        dist[v] = d + time;
        ways[v] = ways[u];
        minHeap.push({dist[v], v});
      } else if (dist[v] == d + time)
        ways[v] = (ways[v] + ways[u]) % MOD;
    }
  }
  return ways[n - 1];
}