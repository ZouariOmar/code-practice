/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### The program should put all even numbers first in sorted order, and then odd numbers in sorted order.
 *
 * @param arr {vector<int> &}
 */
void Solution::segregateEvenOdd(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  vector<int> odd, even; // Group odd and even elements of `arr`
  for (const int &it : arr)
    (it & 1) ? odd.push_back(it) : even.push_back(it);

  arr.clear();
  arr.insert(arr.end(), even.begin(), even.end());
  arr.insert(arr.end(), odd.begin(), odd.end());
}