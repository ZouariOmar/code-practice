/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <unordered_set>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
}; // TreNode struct

//? Class prototype declaration part
class FindElements {
private:
  unordered_set<int> recoveredElements;
  void recoverBinaryTree(TreeNode *);

public:
  FindElements(TreeNode *);
  bool find(int);
}; // FindElements class

#endif // __INC_HPP__