/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://leetcode.com/problems/2-keys-keyboard
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the minimum number of operations to get the character 'A' exactly n times on the screen.
 * @param n
 * @return int
 */
int Solution::minSteps(int n) {
  if (n == 1) return 0;

  int steps{}, factor{2};

  while (n > 1) {
    while (n % factor == 0) {
      steps += factor;
      n /= factor;
    }
    factor++;
  }

  return steps;
}