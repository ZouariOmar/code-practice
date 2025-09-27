/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1 GFG @endlink
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
    : data(x) {};

/**
 * @brief ### Reverse the singly linked list
 *
 * @param head {Node *}
 * @return {Node *}
 */
Node *Solution::rev(Node *head) {
  Node *p = NULL;
  Node *n = head;
  Node *c = head;

  while (n) {
    n = n->next;
    c->next = p;
    p = c;
    c = n;
  }
  return p;
}

/**
 * @brief ### Return the head of the linked list representing the sum of these two numbers.
 *
 * @param num1 {Node *}
 * @param num2 {Node *}
 * @return {Node *}
 */
Node *Solution::addTwoLists(Node *num1, Node *num2) {
  // code here
  while (num1->data == 0) {
    num1 = num1->next;
  }

  while (num2->data == 0) {
    num2 = num2->next;
  }

  Node *rNum1 = rev(num1);
  Node *rNum2 = rev(num2);

  int carry = 0;
  Node *ans = NULL;
  Node *maintain = NULL;

  while (rNum1 && rNum2) {
    int sum = (rNum1->data) + (rNum2->data) + carry;
    carry = sum / 10;
    sum %= 10;

    if (ans == NULL) {
      ans = new Node(sum);
      maintain = ans;
    } else {
      maintain->next = new Node(sum);
      maintain = maintain->next;
    }

    rNum1 = rNum1->next;
    rNum2 = rNum2->next;
  }

  while (rNum1) {
    int sum = (rNum1->data) + carry;
    carry = sum / 10;
    sum %= 10;

    if (ans == NULL) {
      ans = new Node(sum);
      maintain = ans;
    } else {
      maintain->next = new Node(sum);
      maintain = maintain->next;
    }

    rNum1 = rNum1->next;
  }

  while (rNum2) {
    int sum = (rNum2->data) + carry;
    carry = sum / 10;
    sum %= 10;

    if (ans == NULL) {
      ans = new Node(sum);
      maintain = ans;
    } else {
      maintain->next = new Node(sum);
      maintain = maintain->next;
    }

    rNum2 = rNum2->next;
  }

  if (carry) {
    maintain->next = new Node(carry);
  }

  return rev(ans);
}