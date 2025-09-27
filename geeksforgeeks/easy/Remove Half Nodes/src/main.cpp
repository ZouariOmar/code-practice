/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const* argv[]) {
  //* principal vars declaration part
  Solution sl;

  // Init the root
  Solution::Node* root = new Solution::Node(5);
  root->left = new Solution::Node(7);
  root->right = new Solution::Node(8);
  root->left->left = new Solution::Node(2);

  //* Rm half nodes
  sl.RemoveHalfNodes(root);

  // Display the root
  sl.printBT(root);

  return 0;
}
