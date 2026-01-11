/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/valid-parentheses
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief #### Determine if the input string is valid (see @link)
 * @param s
 * @return true
 * @return false
 */
bool Solution::isValid(string s) {
  stack<char> st;
  for (char c : s) {
    if (c == '(' || c == '{' || c == '[') {
      st.push(c);
    } else {
      if (st.empty() ||
          (c == ')' && st.top() != '(') ||
          (c == '}' && st.top() != '{') ||
          (c == ']' && st.top() != '[')) {
        return false;
      }
      st.pop();
    }
  }
  return st.empty();
}