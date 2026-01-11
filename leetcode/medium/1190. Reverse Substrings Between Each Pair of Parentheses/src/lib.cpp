/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Reverse the strings in each pair of matching parentheses, starting from the innermost one.
 *
 * @param s
 * @return string
 */
string Solution::reverseParentheses(string s) {
  int right_par;

  int i = 0;
  while (i < s.size()) {
    if (s[i] == '(')
      right_par = i;

    //* Detect the firsts ')' char
    else if (s[i] == ')') {
      int right = right_par + 1,
          left = i - 1;

      //* Reversing process
      while (right < left) {
        swap(s[right], s[left]);
        left--;
        right++;
      }

      // Del the reversed sub_string parentheses
      s.erase(s.begin() + right_par);
      s.erase(s.begin() + i - 1);

      // Reset the iterator and the right parentheses in the initial pos
      right_par = 0;
      i = 0;
      continue;
    }

    // Increase the iterator
    i++;
  }

  return s;
}