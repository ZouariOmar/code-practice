/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-31
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/insert-in-sorted-way-in-a-sorted-dll/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Insert the element x into the correct position in the sorted Doubly linked list (DLL).
 * @param head Node *
 * @param x int
 * @return Node *
 */
Node *Solution::sortedInsert(Node *head, int x) {
  // Prepare the new node
  Node *new_node = new Node;
  new_node->data = x;

  // Case 1: If the list is empty
  if (!head) {
    new_node->next = nullptr;
    new_node->prev = nullptr;
    return new_node;
  }

  // Case 2: Insert at the beginning if x is less than the head node's data
  if (x <= head->data) {
    new_node->next = head;
    new_node->prev = nullptr;
    head->prev = new_node;
    return new_node;  // new_node becomes the new head
  }

  // Case 3: Insert somewhere in the middle or at the end
  Node *current = head;
  while (current->next && current->next->data < x)
    current = current->next;

  // Insert after current
  new_node->next = current->next;
  new_node->prev = current;
  if (current->next)  // Not the end-tail (in the middle)
    current->next->prev = new_node;

  current->next = new_node;

  return head;
}