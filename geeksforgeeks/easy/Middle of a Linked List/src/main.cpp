/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-09-2024
 * @link      https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Node *root = new Node(1);
  root->next = new Node(2);
  root->next->next = new Node(3);
  root->next->next->next = new Node(4);
  root->next->next->next->next = new Node(5);
  // root->next->next->next->next->next = new Node(6);
  Solution sl;

  cout << sl.getMiddle(root) << endl;

  return 0;
}