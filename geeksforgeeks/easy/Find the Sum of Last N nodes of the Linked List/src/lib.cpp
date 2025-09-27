/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-22
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Calculate the sum of the last n nodes
 * @param head Node *
 * @param n int
 * @return int
 */
int Solution::sumOfLastN_Nodes(Node *head, int n) {
  Node* temp = head, *prev = nullptr;
  while (temp) {  // Reverse the linked list
    Node* front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
  }

  temp = prev;
  int sum{};
  for (int i{}; i < n; i++) {  // Run a for loop till n to find the sum of n digits.
    sum += temp->data;
    temp = temp->next;
  }

  return sum;
}