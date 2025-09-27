/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-07
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=3&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std headers (c++)
#include <iostream>
#include <queue>
#include <vector>

//? Structure(s) prototype declaration part
struct Node {
  int data;
  Node *left, *right;
}; // Node struct

//? Class(es) prototype declaration part
class Solution {
public:
  std::vector<std::vector<int>> levelOrder(Node *);
}; // Solution class

#endif // __INC_HPP__