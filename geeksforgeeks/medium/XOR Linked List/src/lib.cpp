/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-07
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/xor-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node structure
 * @param x {int}
 */
Node::Node(int x)
    : data(x), npx(nullptr) {};

/**
 * @brief ### Utility function to get XOR of two Struct Node pointer
 * @details Use this function to get XOR of two pointers
 * @param a {Node *}
 * @param b {Node *}
 * @return Node *
 */
Node *XOR(Node *a, Node *b) {
  return (Node *)((unsigned long int)(a) ^ (unsigned long int)(b));
}

/**
 * @brief ### function should insert the data to the front of the list
 * @param head {Node *}
 * @param data {int}
 * @return Node *
 */
struct Node *insert(struct Node *head, int data) {
  // create the new node and set the pointer to the head
  Node *newNode = new Node(data);
  newNode->npx = head;
  // head pointer is the previous node, XOR it to new node
  if (head)
    head->npx = XOR(head->npx, newNode);
  return newNode;
}

/**
 * @brief Get the XOR linked list in vector format
 * @param head {Node *}
 * @return vector<int>
 */
vector<int> getList(Node *head) {
  // vector containing the answer
  vector<int> theList;
  // run through the list
  while (head) {
    // insert the data to vector
    theList.push_back(head->data);
    // head points just to the next node
    Node *next = head->npx;
    // using the XOR again will cancel the head address
    if (next)
      next->npx = XOR(next->npx, head);
    // increase the list
    head = next;
  }
  return theList;
}