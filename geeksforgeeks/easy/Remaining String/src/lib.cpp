/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/remaining-string3515/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given a string s without spaces, a character ch and an integer count.
 * Your task is to return the substring that remains after the character ch has appeared count number of times.
 *
 * @param s
 * @param ch
 * @param count
 * @return string
 */
string Solution::printString(string s, char ch, int count) {
  while (count != 0) {
    int is_exist = s.find(ch);
    if (is_exist != -1) {
      s.erase(s.begin(), s.begin() + is_exist + 1);
      count--;
    } else
      return "";
  }

  return s;
}