/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-08
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/implement-stack-using-queues leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new MyStack::MyStack object
 */
MyStack::MyStack() {};

/**
 * @brief ### Push to the stack
 * @param x int
 */
void MyStack::push(int x) {
  q.push_front(x);
}

/**
 * @brief ### Returns a read/write reference to the data at the first element of the stack
 * @return int
 */
int MyStack::top() {
  return q.front();
}

/**
 * @brief ### Returns a read/write reference to the data at the last element of the stack.
 * @return int
 */
int MyStack::pop() {
  int topElement = q.front();
  q.pop_front();
  return topElement;
}

/**
 * @brief ### Returns true if the Stack is empty.
 * @return true | false
 */
bool MyStack::empty() {
  return q.empty();
}

/*
* Using 1 queue
class MyStack {
public:
    queue<int> que;

    MyStack() {

    }

    void push(int x) {
        que.push(x);
        int n = que.size();

        for(int i=0; i<n-1; i++){
            que.push(que.front());
            que.pop();
        }
    }

    int pop() {
        int result = que.front();
        que.pop();

        return result;
    }

    int top() {
        return que.front();
    }

    bool empty() {
        return que.empty();
    }
};
*/