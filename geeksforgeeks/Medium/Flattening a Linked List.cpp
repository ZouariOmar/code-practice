/**
 * @file      Flattening a Linked List.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Flattening a Linked List source file
 * @version   0.1
 * @date      09/19/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/LL-bonus-problem/problem/flattening-a-linked-list geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <queue>
#include <vector>

//? Function(s)/Class(es) prototype dev part

class Node {
public:
  int data;
  Node *next;
  Node *bottom;

  Node(int x) {
    data = x;
    next = NULL;
    bottom = NULL;
  }
}; // Node class

struct Cmp {
  bool operator()(Node *a, Node *b) {
    return a->data > b->data;
  }
}; // Cmp struct

class Solution {
public:
  Node *flatten(Node *root) {
    std::priority_queue<Node *, std::vector<Node *>, Cmp> pq;
    Node *head(nullptr), *tail(nullptr);
    while (root) {
      pq.push(root);
      root = root->next;
    }
    while (!pq.empty()) {
      Node *minNode = pq.top();
      pq.pop();
      if (!head) {
        head = minNode;
        tail = minNode;
      } else {
        tail->bottom = minNode;
        tail = tail->bottom;
      }
      if (minNode->bottom) {
        pq.push(minNode->bottom);
        minNode->bottom = nullptr;
      }
    }
    return head;
  }
}; // Solution class

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
