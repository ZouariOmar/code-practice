/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>
#include <stack>

//? Class prototype declaration part
class Solution {
public:
  // Function to return a list containing the DFS traversal of the graph.
  std::vector<int> dfsOfGraph(std::vector<std::vector<int>> &);
}; // Solution class

#endif  // __INC_HPP__