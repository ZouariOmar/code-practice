/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-06
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1 GFG @endlink
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
};  // Node struct

//? Class prototype declaration part
class Solution {
 private:
  int treePathsSumHelper(Node *, int);

 public:
  int treePathsSum(Node *);
};  // Solution class

#endif  // __INC_HPP__