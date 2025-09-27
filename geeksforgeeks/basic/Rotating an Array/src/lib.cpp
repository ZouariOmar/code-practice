/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Rotate the array by d elements where d ≤ arr.size.
 * @param arr {vector<int> &}
 * @param d {int}
 */
void Solution::leftRotate(vector<int> &arr, int d) {
  size_t len{arr.size()};  // Length of the vector `arr`
  deque<int> q(arr.begin(), arr.end());

  while (d--) {
    q.push_back(q.front());
    q.pop_front();
  }

  arr.clear();
  deque<int>::iterator it = q.begin();
  while (it != q.end()) {
    arr.push_back(*it);
    it++;
  }
}

// /**
//  * @brief ### Rotate the array by d elements where d ≤ arr.size.
//  * ! Time limit exceeded.
//  * @param arr {vector<int> &}
//  * @param d {int}
//  */
// void Solution::leftRotate(vector<int> &arr, int d) {
//   size_t len{arr.size()};  // Length of the vector `arr`
//   while (d--) {
//     int holder{arr[0]};
//     for (size_t i{}; i < len - 1; i++)
//       arr[i] = arr[i + 1];
//     arr[len - 1] = holder;
//   }
// }
