/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=4&difficulty=Easy&sortBy=submissions GFG @endlink
 */

// ? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

// ? Include prototype declaration part

// * Include std headers (c++)
#include <iostream>

// ? Structure(s) prototype declaration part
struct Node {
  int data;
  Node *next;
}; // Node struct

// ? Class(es) prototype declaration part
class Solution {
public:
  Node *deleteNode(Node *, int);
}; // Solution class

#endif // __INC_HPP__