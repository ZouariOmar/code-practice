/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new List Node::List Node struct
 *
 */
ListNode::ListNode()
    : val(0), next(nullptr) {
}

/**
 * @brief ### Construct a new List Node::List Node struct
 * @param x
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

/////////////////////////////////////////////////////////////////////

/**
 * @brief ### Remove the first occurrence of a node with value `x` from the linked list.
 * *
 * ! Error: Time Limit Exceeded
 * @param root Pointer to the head of the linked list.
 * @param x Value of the node to be removed.
 * @return ListNode* Pointer to the new head of the modified linked list.
 */
ListNode *Solution::modifiedList(vector<int> &nums, ListNode *head) {
  for (int it : nums)
    head = del_node(head, it);

  return head;
}

/**
 * @brief ### Remove the first occurrence of a node with value `x` from the linked list.
 *
 * @param root Pointer to the head of the linked list.
 * @param x Value of the node to be removed.
 * @return ListNode* Pointer to the new head of the modified linked list.
 */
ListNode *Solution::del_node(ListNode *root, int x) {
  // Handle the case where the node to be deleted is the head node.
  while (root && root->val == x) {
    ListNode *tmp = root;
    root = root->next;
    delete tmp;
  }

  ListNode *current = root->next;
  ListNode *prev = root;

  while (current) {
    if (current->val == x) {
      ListNode *tmp = current;
      current = current->next;
      prev->next = current;

      delete tmp;
    } else {
      prev = current;
      current = current->next;
    }
  }

  return root;
}

void Solution::showSLL(ListNode *root) {
  if (!root) return;
  cout << root->val << " ";
  showSLL(root->next);
}

/*
* Worked solution
class Solution {
public:
    ListNode* modifiedList(vector<int>& excludeValues, ListNode* head) {
        bitset<100001> excludeSet;
        for (int val : excludeValues) {
            excludeSet.set(val);
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        while (curr->next) {
            if (excludeSet[curr->next->val]) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
*/