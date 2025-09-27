/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std headers (c++)
#include <iostream>

//? Structure(s) prototype declaration part
struct Node {
  int data;
  Node *left, *right;
  Node(int);
}; // Node struct

//? Class(es) prototype declaration part
class Solution {
private:
  int maxDepth(Node *, bool &);

public:
  bool isBalanced(Node *root);
}; // Solution class

#endif // __INC_HPP__