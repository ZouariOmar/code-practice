/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1 GFG @endlink
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
  Node(int);
}; // Node struct

//? Class prototype declaration part
class Solution {
public:
  Node *reverseKGroup(Node *, int);
}; // Solution class

#endif // __INC_HPP__