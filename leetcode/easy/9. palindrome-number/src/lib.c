/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/palindrome-number
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given an integer x, return true if x is a palindrome, and false otherwise.
 * @param x
 * @return true
 * @return false
 */
bool isPalindrome(int x) {
  if (x < 0)
    return false;

  else {
    long reverseNum = 0,
        tmp = x;

    while (tmp) {
      int digit = tmp % 10;
      reverseNum *= 10;
      reverseNum += digit;
      tmp /= 10;
    }

    return (x == reverseNum);
  }
}