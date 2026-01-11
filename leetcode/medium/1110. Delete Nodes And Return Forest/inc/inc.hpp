/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/delete-nodes-and-return-forest
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <unordered_set>
#include <vector>

//* use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode()
      : val(0), left(nullptr), right(nullptr) {};
  TreeNode(int x)
      : val(x), left(nullptr), right(nullptr) {};
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 private:
  TreeNode* helper(TreeNode*, unordered_set<int>&, vector<TreeNode*>&, bool);

 public:
  vector<TreeNode*> delNodes(TreeNode*, vector<int>&);
};

#endif