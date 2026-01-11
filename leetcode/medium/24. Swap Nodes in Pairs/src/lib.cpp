/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://leetcode.com/problems/swap-nodes-in-pairs
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new List Node::List Node struct
 * @param x
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

ListNode *Solution::swapPairs(ListNode *head) {
  if (!head || !head->next) return head;

  ListNode *foo = new ListNode(-1);
  foo->next = head;
  ListNode *prev = foo;
  ListNode *current = head;

  while (current && current->next) {
    prev->next = current->next;
    current->next = prev->next->next;
    prev->next->next = current;

    prev = current;
    current = current->next;
  }

  return foo->next;
}

/**
 * @brief ### Print SLL
 * @param head
 */
void printSll(ListNode *head) {
  if (!head) return;
  cout << head->val << " ";
  printSll(head->next);
}

/*
* Other solution
class Solution {
public:
   ListNode* swapPairs(ListNode* &head) {
 if(!head||!head->next) return head;
ListNode* ptr=head;
ListNode* newHead=head->next;
ListNode* prev=NULL;
while(ptr&&ptr->next){
  ListNode* temp1=ptr;
  ListNode* temp2=ptr->next;

  temp1->next=temp2->next;
  temp2->next=temp1;

  if(prev) prev->next=temp2;

prev=temp1;
ptr=temp1->next;

}

return newHead;
    }
};
*/