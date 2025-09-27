/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define MOD 1000000007

//? Include prototype declaration part

//* Include std libs (c)
#include <math.h>

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part

struct Node {
  int data;
  Node *next;
  Node(int);
};  // Node structure

//? Class prototype declaration part

class solution {
 private:
  long long sllToNumber(Node *);

 public:
  long long multiplyTwoLists(Node *, Node *);
};  // solution class

#endif