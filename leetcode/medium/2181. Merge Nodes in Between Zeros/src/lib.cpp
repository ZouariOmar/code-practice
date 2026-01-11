/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.
 * @param head
 * @return ListNode*
 */
ListNode* Solution::mergeNodes(ListNode* head) {
  ListNode* dummy = new ListNode(0);
  ListNode* current_new_sll = dummy;
  ListNode* current = head->next;
  int sum = 0;

  while (current != nullptr) {
    if (current->val == 0) {
      current_new_sll->next = new ListNode(sum);
      current_new_sll = current_new_sll->next;
      sum = 0;
    } else {
      sum += current->val;
    }
    current = current->next;
  }

  return dummy->next;
}