/**
 * @file    Sort a linked list of 0s, 1s and 2s.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Sort a linked list of 0s, 1s and 2s source file
 * @version 0.1
 * @date    2025-04-29
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Struct prototype declaration part
struct Node {
  int data;
  Node *next;
}; // Node struct

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  Node *segregate(Node *head) {
    unsigned int count[3]{};
    Node *curr(head);
    while (curr)
      count[curr->data]++, curr = curr->next;
    curr = head;
    for (unsigned int j{}; j < 3; j++)
      for (unsigned int i{}; i < count[j]; i++)
        curr->data = j, curr = curr->next;
    return head;
  }
};

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
