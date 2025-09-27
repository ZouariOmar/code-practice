/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-09-2024
 * @link      https://www.geeksforgeeks.org/problems/longest-valid-parentheses5657/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Find length of the longest valid parenthesis substring
 * *
 * - #### For every opening parenthesis, there is a closing parenthesis.
 * *
 * - #### Opening parenthesis must be closed in the correct order.
 * @return int
 */
int Solution::maxLength(string &str) {
  size_t n{str.size()};
  stack<int> st;
  int ans{};

  for (int i{}; i < n; i++) {
    if (str[i] == '(')
      st.push(i);
    else {
      if (!st.empty() && str[st.top()] == '(') {
        st.pop();
        int first = st.empty() ? -1 : st.top();
        ans = max(ans, i - first);
      } else
        st.push(i);
    }
  }

  return ans;
}