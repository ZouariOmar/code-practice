/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

/**
 * ? Constraints
 * 1 <= Number of nodes, data of nodes <= 10^5
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//? Structure prototype declaration part
struct Node {
  int data;
  Node *next;
  Node(int);
}; // Node struct

//? Class prototype declaration part
class Solution {
public:
  Node *removeDuplicates(Node *);
}; // Solution class

#endif // __INC_HPP__