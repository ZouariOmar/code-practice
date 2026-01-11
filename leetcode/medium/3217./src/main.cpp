/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array
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
  vector<int> arr = {1, 1};
  ListNode *root = new ListNode(1);
  root->next = new ListNode(2);
  root->next->next = new ListNode(1);
  root->next->next->next = new ListNode(2);
  root->next->next->next->next = new ListNode(1);

  root = sl.modifiedList(arr, root);

  sl.showSLL(root);

  return 0;
}