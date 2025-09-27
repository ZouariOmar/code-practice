/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-11
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/find-the-odd-occurence4820/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the exceptional number.
 * @param arr int*
 * @param n int
 * @return int
 */
int Solution::getOddOccurrence(int *arr, int n) {
  unordered_map<int, int> ump;

  for (int i{}; i < n; i++)
    ump[arr[i]]++;  // Count occ

  for (unordered_map<int, int>::iterator it = ump.begin(); it != ump.end(); it++)
    if (it->second & 1) return it->first;  // Find the the exceptional number

  return -1;  // The exceptional number not exist
}

/*
int getOddOccurrence(int arr[], int n) {
  int ans =  0;
  for(int i= 0 ; i < n; i++)
      ans ^= arr[i];
  return ans;
}
*/