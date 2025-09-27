/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-07
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/xor-linked-list/1 GFG @endlink
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
  Node *npx;
  Node(int);
};  // Node structure - XOR Linked List structure

//? Function prototype declaration part

Node *XOR(Node *, Node *);
Node *insert(Node *, int);
vector<int> getList(Node *);

#endif