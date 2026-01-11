/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-22
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode:: TreeNode object
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Return the kth largest level sum in the tree (not necessarily distinct).
 * *
 * - #### If there are fewer than k levels in the tree, return -1. ==> if the size of the result vector less than `k - 1`
 * *
 * @param root TreeNode *
 * @param k int
 * @return long long
 */
long long Solution::kthLargestLevelSum(TreeNode* root, int k) {
  vector<long long> res;  // To store sum of each level
  queue<TreeNode*> q;     // Queue for level-order traversal (BFS)

  q.push(root);  // Start BFS from the root node
  while (!q.empty()) {
    int n = q.size();   // Number of nodes at the current level
    long long sum = 0;  // Sum of node values at the current level

    // Process all nodes at the current level
    while (n--) {
      TreeNode* node = q.front();
      q.pop();                      // Get the front node from the queue
      sum += (long long)node->val;  // Add node's value to the level sum

      // Push left and right children of the node to the queue (if they exist)
      if (node->left) q.push(node->left);
      if (node->right) q.push(node->right);
    }
    res.push_back(sum);  // Store the sum of the current level
  }

  if (k > res.size()) return -1;   // If k is greater than the number of levels, return -1
  sort(res.rbegin(), res.rend());  // Sort the level sums in ascending order
  return res[k - 1];               // Return the k-th largest level sum (k-1 due to 0-based indexing)
}

// /**
//  * @brief ### Return the kth largest level sum in the tree (not necessarily distinct).
//  * *
//  * - #### If there are fewer than k levels in the tree, return -1. ==> if the size of the result vector less than `k - 1`
//  * *
//  * ! Memory Limit Exceeded
//  * @param root TreeNode *
//  * @param k int
//  * @return long long
//  */
// long long Solution::kthLargestLevelSum(TreeNode *root, int k) {
//   if (!root) return -1;  // If the root is empty
//   vector<long long> sum_tracker(k, 0);
//   queue<pair<TreeNode *, int>> q;

//   q.push({root, 0});
//   int i{0};
//   while (!q.empty()) {
//     sum_tracker[q.front().second] += q.front().first->val;
//     q.pop();
//     if (root->left) q.push({root->left, i + 1});
//     if (root->right) q.push({root->right, i + 1});
//   }

//   return (sum_tracker.size() < k) ? -1 : sum_tracker[k - 1];
// }