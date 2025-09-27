/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-18
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1 GFG @endlink
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
 * @brief ### Left rotate the linked list k times.
 *
 * @param head {Node *}
 * @param k int
 * @return {Node *}
 */
Node *Solution::rotate(Node *head, int k) {
  vector<int> arr;
  Node *current{head};
  while (current)
    arr.push_back(current->data), current = current->next;
  std::rotate(arr.begin(), arr.begin() + (k % arr.size()), arr.end());
  current = head;
  for (const int &it : arr)
    current->data = it, current = current->next;
  return head;
}

/*
* Other solution
Node* rotate(Node* head, int k) {
        Node*temp = head;
        int n = 0;
        while(true){
            if(temp->next){
                temp = temp->next;
            }
            else{
                temp->next = head;
                n++;
                break;
            }
            n++;
        }
        Node*prev = temp;
        temp = head;
        k%=n;
        while(k > 0){
            prev = temp;
            temp = temp->next;
            k--;
        }
        if(prev){
            prev->next = nullptr;
        }
        return temp;
    }
*/