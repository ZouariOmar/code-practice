/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://leetcode.com/problems/same-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct TreeNode {
  int val;
  TreeNode *left, *right;

  // Constructors
  TreeNode();
  TreeNode(int);
};  // TreeNode struct

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * ? Constraints:
 * - The number of nodes in both trees is in the range [0, 100].
 * - -104 <= Node.val <= 104
 */

class Solution {
 public:
  bool isSameTree(TreeNode *, TreeNode *);
};  // Solution class

#endif