/**
 * @file      Intersection in Y Shaped Lists.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Intersection in Y Shaped Lists source file
 * @version   0.1
 * @date      17/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/LL-bonus-problem/problem/intersection-point-in-y-shapped-linked-lists geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

class Node {
public:
  int data;
  Node *next;
  Node(int x) : data(x), next(nullptr) {};
}; // Node class

class Solution {
public:
  Node *intersectPoint(Node *head1, Node *head2) {
    if (!head1 || !head2)
      return nullptr;
    Node *node1(head1), *node2(head2);
    while (node1 != node2) {
      node1 = node1 ? node1->next : head1;
      node2 = node2 ? node2->next : head2;
    }
    return node1;
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
