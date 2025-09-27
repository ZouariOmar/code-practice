/**
 * @file      Maximum path sum from any node.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Maximum path sum from any node source file
 * @version   0.1
 * @date      14/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/maximum-path-sum-from-any-node geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
}; // Node class

class Solution {
private:
  int helper(Node *root, int &res) {
    if (!root)
      return 0;
    int l(std::max(0, helper(root->left, res)));
    int r(std::max(0, helper(root->right, res)));
    res = std::max(res, l + r + root->data);
    return root->data + std::max(l, r);
  }

public:
  int findMaxSum(Node *root) {
    int res(root->data);
    helper(root, res);
    return res;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
