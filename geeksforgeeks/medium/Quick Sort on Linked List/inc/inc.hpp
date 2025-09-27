/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/quick-sort-on-linked-list/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct Node {
  int data;
  Node* next;
};  // Node struct (singly linked list)

//? Class prototype declaration part
class Solution {
 private:
  void helper(std::vector<int>&, int, int);
  void sll_to_vector(Node*, std::vector<int>&);
  int partition(std::vector<int>& v, int, int);
  Node* vector_to_sll(Node*, const std::vector<int>&);

 public:
  Node* quickSort(Node*);
};  // Solution class

#endif  // __INC_HPP__