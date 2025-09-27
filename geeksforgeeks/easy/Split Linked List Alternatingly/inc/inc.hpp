/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-16
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/split-singly-linked-list-alternatingly/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part

struct Node {
  int data;
  Node *next;
  Node(int);
};  // Node struct

//? Class prototype declaration part
class Solution {
 public:
  // Function to split a linked list into two lists alternately
  vector<Node *> alternatingSplitList(Node *);
};  // Solution class

#endif