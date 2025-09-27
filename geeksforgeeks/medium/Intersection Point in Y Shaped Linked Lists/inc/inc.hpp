/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-13
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct Node {
  int data;
  Node *next;
};  // Node struct

//? Class prototype declaration part
class Solution {
 public:
  int intersectPoint(Node *, Node *);
};

#endif  // __INC_HPP__