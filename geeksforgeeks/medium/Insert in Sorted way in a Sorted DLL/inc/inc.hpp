/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-31
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/insert-in-sorted-way-in-a-sorted-dll/1 GFG @endlink
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
struct Node {
  int data;
  Node *next, *prev;
};  // Node struct

//? Class prototype declaration part
class Solution {
 public:
  Node *sortedInsert(Node *, int);
};  // Solution class

#endif  // __INC_HPP__