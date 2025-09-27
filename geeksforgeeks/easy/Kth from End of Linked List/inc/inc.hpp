/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=3&sortBy=submissions GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

// ? Struct prototype declaration part
struct Node {
  int data;
  Node *next;
}; // Node struct

//? Class prototype declaration part
class Solution {
public:
  int getKthFromLast(Node *, int);
}; // Solution class

#endif // __INC_HPP__