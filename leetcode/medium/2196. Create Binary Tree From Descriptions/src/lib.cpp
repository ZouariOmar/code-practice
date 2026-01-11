/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/create-binary-tree-from-descriptions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Convert the descriptions vector<vector<int>> to binary tree
 *
 * @param descriptions
 * @return TreeNode*
 */
TreeNode* Solution::createBinaryTree(vector<vector<int>>& descriptions) {
  TreeNode* tree = new TreeNode(descriptions[0][0]);
  create_BTN(&tree, descriptions[0]);
  descriptions.erase(descriptions.begin());

  int i = 0;
  while (!descriptions.empty()) {
    if (!link_BTN(&tree, descriptions[i])) {
      descriptions.erase(descriptions.begin() + i);
      i = 0;
    } else {
      i++;
    }
  }

  return tree;
}

/**
 * @brief Link the node with tree
 * 
 * @param tree 
 * @param arr 
 * @return int 
 */
int Solution::link_BTN(TreeNode** tree, vector<int> arr) {
  if (*tree != nullptr) {
    if ((*tree)->val == arr[0]) {
      create_BTN(tree, arr);
      return 0;
    } else if ((*tree)->val == arr[1]) {
      TreeNode* node = new TreeNode(arr[0]);
      arr[2] ? node->left = *tree : node->right = *tree;
      *tree = node;
      return 0;
    } else {
      if (!link_BTN(&(*tree)->left, arr) || !link_BTN(&(*tree)->right, arr)) {
        return 0;
      }
    }
  }
  return 1;
}

/**
 * @brief Create the Binary Tree Node subtractions
 * 
 * @param tree 
 * @param arr 
 */
void Solution::create_BTN(TreeNode** tree, vector<int> arr) {
  if (arr[2])
    (*tree)->left = new TreeNode(arr[1]);
  else
    (*tree)->right = new TreeNode(arr[1]);
}

/**
 * @brief Show the binary tree using the preorder transversal method
 *
 * @param tree
 */
void Solution::printBT(TreeNode* tree) {
  if (tree != nullptr) {
    cout << tree->val << endl;
    printBT(tree->left);
    printBT(tree->right);
  }
}

/*
* By chatGBT
#include <unordered_map>

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodeMap;
        unordered_map<int, bool> isChild;

        // Create all nodes and keep track of child nodes
        for (const auto& desc : descriptions) {
            int parent = desc[0];
            int child = desc[1];
            bool isLeft = desc[2];

            if (nodeMap.find(parent) == nodeMap.end()) {
                nodeMap[parent] = new TreeNode(parent);
            }
            if (nodeMap.find(child) == nodeMap.end()) {
                nodeMap[child] = new TreeNode(child);
            }

            if (isLeft) {
                nodeMap[parent]->left = nodeMap[child];
            } else {
                nodeMap[parent]->right = nodeMap[child];
            }

            isChild[child] = true;
        }

        // Find the root node (which is not a child of any other node)
        TreeNode* root = nullptr;
        for (const auto& desc : descriptions) {
            int parent = desc[0];
            if (isChild.find(parent) == isChild.end()) {
                root = nodeMap[parent];
                break;
            }
        }

        return root;
    }
};

*/