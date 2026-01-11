/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/merge-two-sorted-lists
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;

  // Creat the first SLL
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(4);

  // Creat the second SLL
  ListNode *head2 = new ListNode(1);
  head2->next = new ListNode(3);
  head2->next->next = new ListNode(4);

  ListNode *result = sl.mergeTwoLists(head, head2);

  //* Show the result
  while (result != nullptr) {
    cout << result->val << " ";
    result = result->next;
  }

  return 0;
}
