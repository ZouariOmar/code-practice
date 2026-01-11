/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;

  // Creat the the BT
  TreeNode *tree = new TreeNode(5);
  tree->left = new TreeNode(1);
  tree->left->left = new TreeNode(3);
  tree->right = new TreeNode(2);
  tree->right->left = new TreeNode(6);
  tree->right->right = new TreeNode(4);

  // Show the tree
  sl.displayBT(tree);

  printf("\n");

  cout << sl.getDirections(tree, 3, 6) << endl;

  return 0;
}
