/**
 * @file      Queue Using Array.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Queue Using Array source file
 * @version   0.1
 * @date      02/10/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?page=1&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

class myQueue {
  int *arr, front, rear, capacity;

public:
  myQueue(int n) : capacity(n + 1), arr(new int[n + 1]), front(), rear() {};

  bool isEmpty() {
    return front == rear;
  }

  bool isFull() {
    return (rear + 1) % capacity == front;
  }

  void enqueue(int x) {
    if (isFull())
      return;
    arr[rear] = x;
    rear = (rear + 1) % capacity;
  }

  void dequeue() {
    if (!isEmpty())
      front = (front + 1) % capacity;
  }

  int getFront() {
    return isEmpty() ? -1 : arr[front];
  }

  int getRear() {
    return isEmpty() ? -1 : arr[(rear - 1 + capacity) % capacity];
  }

  ~myQueue() {
    delete[] arr;
  }
}; // myQueue class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
