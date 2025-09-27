/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

void Solution::segregate0and1(vector<int> &arr) {
  sort(arr.begin(), arr.end());
}

/*
* or this solution
.
.
.
void Solution::segregate0and1(vector<int> &arr) {
  int sum = 0;

  // Find the number of 1's
  for (int it : arr)
    sum += it;

  // Sort the arr vector
  for (int i = 0; i < arr.size(); i++) {
    if (i < arr.size() - sum)
      arr[i] = 0;
    else
      arr[i] = 1;
  }
}
*/
