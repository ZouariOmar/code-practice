/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-25
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node object
 *
 * @param x int
 */
Node::Node(int x)
    : data(x), next(nullptr) {};

/**
 * @brief ### Return the first node of the loop else return NULL.
 * @details We use the Floyd Algo
 * @param head {Node *}
 * @return {Node *}
 */
Node *Solution::findFirstNode(Node *head) {
  Node *slow{head}, *fast{head};
  while (slow && fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)  // Detect a loop
      break;
  }

  // There is no loop
  if (fast == nullptr || fast->next == nullptr)
    return nullptr;

  // There is a loop
  slow = head;
  while (slow != fast)
    slow = slow->next, fast = fast->next;

  return slow;
}