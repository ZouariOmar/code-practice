/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      14-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
 * @param a
 * @param n
 */
void Solution::sort012(int *a, int n) {
  int count0 = 0, count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) count0++;
    else if (a[i] == 1) count1++;
    else count2++;
  }

  for (int i = 0; i < count0; i++)
    a[i] = 0;
  for (int i = count0; i < count0 + count1; i++)
    a[i] = 1;
  for (int i = count0 + count1; i < count0 + count1 + count2; i++)
    a[i] = 2;
}