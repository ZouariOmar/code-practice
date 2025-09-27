/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/height-of-binary-tree/1 GFG @endlink
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
  Node *left, *right;
  Node(int);
};

//? Class prototype declaration part
class Solution {
private:
  int helper(Node *, int);

public:
  int height(Node *);
}; // Solution class

#endif // __INC_HPP__