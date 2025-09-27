/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Node::Node structure
 * @param x
 */
Node::Node(int x)
    : data(x), next(nullptr) {};

/**
 * @brief ### Floyd’s Cycle Finding Algorithm
 * *
 * - #### Rm loops from linked list
 * @param head
 */
void Solution::removeLoop(Node *head) {
  if (!head || !head->next) return;

  Node *slow = head, *fast = head;

  // Detect loop using Floyd’s Cycle-Finding Algorithm
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;

    // If slow and fast meet, a loop is detected
    if (slow == fast) break;
  }

  // If no loop is found, return
  if (slow != fast) return;

  // To remove the loop, we need to find the start of the loop
  slow = head;
  Node *prev = nullptr;  // This will keep track of the node before the start of the loop

  while (slow != fast) {
    prev = fast;
    slow = slow->next;
    fast = fast->next;
  }

  // 'prev' now points to the node before the start of the loop
  prev->next = nullptr;
}

void printSll(Node *root) {
  if (!root) return;
  cout << root->data << " ";
  printSll(root->next);
}

/*
* Worked code
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(!head) return;

        //using two pointers and moving one pointer(slow) by one node and
        //another pointer(fast) by two nodes in each iteration.
        Node* fast = head->next;
        Node* slow = head;

        while( fast != slow )
        {
            //if the node pointed by first pointer(fast) or the node
            //next to it is null, then loop is not present.
            if( !fast || !fast->next )
            return;
            fast=fast->next->next;
            slow=slow->next;
        }
        //both pointers now point to the same node in the loop.

        int size = 1;
        fast = fast->next;

        //we start iterating the loop with first pointer and continue till
        //both pointers point to same node again.
        while( fast != slow )
        {
            //incrementing the counter which stores length of loop.
            size++;
            fast = fast->next;
        }

        //updating the pointers again to starting node.
        slow = head;
        fast = head;
        for(int i=0; i<size-1; i++)
            fast = fast->next;

        while( fast->next != slow )
        {
            fast = fast->next;
            slow = slow->next;
        }
        //storing null in link part of the last node.
        fast->next = NULL;
    }
};
*/