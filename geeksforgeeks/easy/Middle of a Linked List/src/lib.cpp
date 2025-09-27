/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-09-2024
 * @link      https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Node::Node struct
 * @param x int
 */
Node::Node(int x)
    : data(x), next(nullptr) {
}

/**
 * @brief ### Should return data of middle node. If linked list is empty, then -1
 * @param head Node *
 * @return int
 */
int Solution::getMiddle(Node *head) {
  if (!head) return -1;

  int count{};
  Node* curr1 = head;
  while (curr1) {
    count++;
    curr1 = curr1->next;
  }

  int middle = (count / 2);
  int cnt = 0;
  while (cnt != middle) {
    head = head->next;
    cnt++;
  }

  return head->data;
}