/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-15
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Check if the array contains all elements in the given range (inclusive).
 * @param arr int *
 * @param n int
 * @param A int
 * @param B int
 * @return true or false
 */
bool Solution::check_elements(int arr[], int n, int A, int B) {
  unordered_set<int> st;

  for (size_t i{}; i < n; i++)
    if (arr[i] >= A  && arr[i] <= B) st.insert(arr[i]);

  return st.size() == B - A + 1;
}