/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-12
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/implement-queue-using-stacks/ leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new MyQueue::MyQueue object
 */
MyQueue::MyQueue() {};

/**
 * @brief ### Pushes element x to the back of the queue.
 * @param x int
 */
void MyQueue::push(int x) {
  in_stk.push(x);  // Push to in-stack
}

/**
 * @brief ### Returns the element at the front of the queue.
 * @return int
 */
int MyQueue::peek() {
  if (out_stk.empty())
    while (!in_stk.empty())
      out_stk.push(in_stk.top()), in_stk.pop();

  return out_stk.top();
}

/**
 * @brief ### Removes the element from the front of the queue and returns it.
 * @return int
 */
int MyQueue::pop() {
  int front = peek();  // Ensure out-stack has the front element
  out_stk.pop();
  return front;
}

/**
 * @brief ### Returns true if the queue is empty, false otherwise.
 * @return true | false
 */
bool MyQueue::empty() {
  return in_stk.empty() && out_stk.empty();
}