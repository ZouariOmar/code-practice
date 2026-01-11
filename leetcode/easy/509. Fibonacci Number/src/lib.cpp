/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      31-07-2024
 * @link      https://leetcode.com/problems/fibonacci-number
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the fibonacci number of the integer `n`
 * 
 * @param n 
 * @return int 
 */
int Solution::fib(int n) {
  if (n <=1)
    return n;
  return fib(n - 1) + fib(n - 2);
}