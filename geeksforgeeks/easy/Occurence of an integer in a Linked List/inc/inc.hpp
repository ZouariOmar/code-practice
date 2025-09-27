/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct node {
  int data;
  node *next;
  node(int);
};  // node struct

//? Class prototype declaration part
class Solution {
 public:
  int count(node *, int);
};  // Solution class

#endif  // __INC_HPP__Or __INC_H__