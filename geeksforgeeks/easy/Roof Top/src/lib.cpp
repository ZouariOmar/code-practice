/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      26-09-2024
 * @link      https://www.geeksforgeeks.org/problems/roof-top-1587115621/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to find maximum number of consecutive steps
 * to gain an increase in altitude with each step.
 * @param arr vector<int> &
 * @return int
 */
int Solution::maxStep(vector<int> &arr) {
  size_t n{arr.size()};
  int max_steps{}, steps{};

  for (size_t i{1}; i < n; i++) {
    if (arr[i] > arr[i - 1])
      steps++;
    else {
      max_steps = max(steps, max_steps);
      steps = 0;
    }
  }

  return max(steps, max_steps);
}