/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Solution sl;

  // Head 1
  Node *head1 = new Node(4);
  head1->next = new Node(5);

  // Head 2
  Node *head2 = new Node(3);
  head2->next = new Node(4);
  head2->next->next = new Node(5);

  // Sum of two heads
  head1 = sl.addTwoLists(head1, head2);

  //! Testing part => Show the result head
  return 0;
}