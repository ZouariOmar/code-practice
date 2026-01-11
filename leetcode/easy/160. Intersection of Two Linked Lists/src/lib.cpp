/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-16
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/intersection-of-two-linked-lists leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief Construct a new List Node:: List Node object
 * @param x int
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

/**
 * @brief ### Return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
 * @param headA ListNode *
 * @param headB ListNode *
 * @return ListNode*
 */
ListNode *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
  unordered_set<ListNode *> st;
  for (ListNode *p = headA; p != nullptr; p = p->next)
    st.insert(p);

  for (ListNode *p = headB; p != nullptr; p = p->next)
    if (st.find(p) != st.end()) return p;

  return nullptr;
}

// /**
//  * @brief ### Booster
//  */
// int init = [] {
//   std::ios_base::sync_with_stdio(false);
//   std::cin.tie(nullptr);
//   std::ofstream out("user.out");
//   for (string s; getline(std::cin, s);) {
//     if (s[0] != '0')
//       out << "Intersected at '" << s << "'\n";
//     else
//       out << "No intersection\n";
//     for (int i = 0; i < 4; ++i) getline(std::cin, s);
//   }
//   out.flush();
//   exit(0);
//   return 0;
// }();