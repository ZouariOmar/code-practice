/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node struct
 * @param x int
 */
Node::Node(int x)
    : data(x), next(nullptr) {};

/**
 * @brief ### Multiply the contents of the two linked lists
 * @param head1 Node *
 * @param head2 Node *
 * @return long long
 */
long long solution::multiplyTwoLists(Node *head1, Node *head2) {
  return (sllToNumber(head1) * sllToNumber(head2)) % MOD;
}

/**
 * @brief ### Singly linked list to a number
 * @param head Node *
 * @return int 
 */
long long solution::sllToNumber(Node *head) {
  int res{};
  while (head) {
    res = (res * 10 + head->data) % MOD;  // Apply modulo during number formation
    head = head->next;
  }

  return res;
}