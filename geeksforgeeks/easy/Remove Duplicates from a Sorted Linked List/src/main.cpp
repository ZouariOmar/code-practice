/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Node *head = new Node(0);
  head->next = new Node(0);
  head->next->next = new Node(1);
  Solution sl;
  head = sl.removeDuplicates(head);
  
  while (head)
    std::cout << head->data << " ", head = head->next;

  return EXIT_SUCCESS;
}