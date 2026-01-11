/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://leetcode.com/problems/number-complement
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given an integer num, return its complement.
 * @param num
 * @return int
 */
int Solution::findComplement(int num) {
  // Find number of bits in the given integer
  int number_of_bits = floor(log2(num)) + 1;
  cout << number_of_bits << endl;

  return (unsigned)(((1 << number_of_bits) - 1) ^ num);
}