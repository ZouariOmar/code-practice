/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-09-2024
 * @link      https://leetcode.com/problems/design-circular-deque
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <deque>
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class MyCircularDeque {
 private:
  int len;
  deque<int> dq;

 public:
  MyCircularDeque(int);
  bool insertFront(int);
  bool insertLast(int);
  bool deleteFront();
  bool deleteLast();
  int getFront();
  int getRear();
  bool isEmpty();
  bool isFull();
};  // MyCircularDeque class

#endif