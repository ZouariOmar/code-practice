/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/number-of-good-leaf-nodes-pairs
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <vector>

//* use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode()
      : val(0), left(nullptr), right(nullptr) {};
  TreeNode(int x)
      : val(x), left(nullptr), right(nullptr) {};
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 public:
  int countPairs(TreeNode*, int);
  vector<int> dfs(TreeNode* root, int& count, int distance);
};

#endif