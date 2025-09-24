/**
 * @file      Pair Sum in BST.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Pair Sum in BST source file
 * @version   0.1
 * @date      09/15/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/find-a-pair-with-given-target-in-bst geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

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
  static const void helper(Node *root, std::vector<int> &v) {
    if (!root)
      return;
    helper(root->left, v);
    v.push_back(root->data);
    helper(root->right, v);
  }

public:
  bool findTarget(Node *root, int target) {
    std::vector<int> v;
    helper(root, v);
    int l{}, h(v.size() - 1);
    while (l < h) {
      int sum(v[l] + v[h]);
      if (sum == target)
        return true;
      (sum < target) ? ++l : --h;
    }
    return false;
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
