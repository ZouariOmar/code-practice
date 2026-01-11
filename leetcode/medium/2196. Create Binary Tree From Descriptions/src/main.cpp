/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/create-binary-tree-from-descriptions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const* argv[]) {
  //* principal vars declaration part
  Solution sl;
  vector<vector<int>> arr = {{20, 15, 1}, {20, 17, 0}, {50, 20, 1}, {50, 80, 0}, {80, 19, 0}};
  TreeNode* tree = sl.createBinaryTree(arr);

  sl.printBT(tree);

  return 0;
}
