/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  solution sl;
  Node *head1 = new Node(3);
  head1->next = new Node(2);
  Node *head2 = new Node(2);

  cout << sl.multiplyTwoLists(head1, head2) << endl;

  return 0;
}