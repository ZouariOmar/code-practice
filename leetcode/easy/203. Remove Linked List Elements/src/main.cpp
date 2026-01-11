/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/remove-linked-list-elements leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  Solution sl;
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);

  head = sl.removeElements(head, 3);

  while (head) {
    cout << head->val << " ";
    head = head->next;
  }

  return 0;
}