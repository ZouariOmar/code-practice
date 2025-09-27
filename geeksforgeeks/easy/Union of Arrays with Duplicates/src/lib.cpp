/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the number of elements in the union between these two arrays.
 * @param a {vector<int> &}
 * @param b {vector<int> &}
 * @return int
 */
int Solution::findUnion(vector<int> &a, vector<int> &b) {
  unordered_set<int> ust;
  for (int &it : b)
    ust.insert(it);
  for (int &it : a)
    ust.insert(it);
  return ust.size();
}