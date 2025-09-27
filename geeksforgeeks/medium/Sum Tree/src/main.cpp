/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sum-tree/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  //* principal vars declaration part
  Solution sl;
  Node *root = new Node(3);
  root->left = new Node(1);
  root->right = new Node(2);

  cout << sl.isSumTree(root) << endl;

  return 0;
}