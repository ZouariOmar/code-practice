/**
 * @file    Prime List.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Prime List source file
 * @version 0.1
 * @date    2025-05-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/prime-list--170646/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <cmath>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Node {
public:
  int val;
  Node *next;
  Node(int _val = 0)
      : val(_val), next(nullptr) {};
}; // Node class

class Solution {
private:
  bool isprime(int val) {
    if (val <= 1)
      return false;
    for (int i(2); i <= std::sqrt(val); i++) {
      if (val % i == 0)
        return false;
    }
    return true;
  }

  int closestPrime(const int &val) {
    if (isprime(val))
      return val;

    int l = val - 1, r = val + 1;
    while (true) {
      if (l >= 0 && isprime(l))
        return l;
      if (isprime(r))
        return r;
      l--, r++;
    }
  }

public:
  Node *primeList(Node *head) {
    Node *curr(head);
    while (curr) {
      curr->val = closestPrime(curr->val);
      curr = curr->next;
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
