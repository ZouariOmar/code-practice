/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://leetcode.com/problems/binary-tree-inorder-traversal
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct TreeNode {
  int val;
  TreeNode *left, *right;

  // TreeNode constructors
  TreeNode();
  TreeNode(int);
};  // TreeNode struct

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  void inTrv(TreeNode *, vector<int> &);

 public:
  vector<int> inorderTraversal(TreeNode *);
};  // Solution class

#endif