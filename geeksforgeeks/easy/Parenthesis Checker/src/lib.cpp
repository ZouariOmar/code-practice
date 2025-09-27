/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to check if brackets are balanced or not.
 * @param string s
 * @return true
 * @return false
 */
bool Solution::ispar(string s) {
  stack<char> sk;
  unordered_map<char, char> mp = {
      {'(', ')'},
      {'{', '}'},
      {'[', ']'}};

  for (char ch : s) {
    if (mp.count(ch))  // If it's an opening bracket, push it
      sk.push(ch);
    else {
      if (sk.empty() || mp[sk.top()] != ch)  // If it's a closing bracket, check if it matches the top of the stack
        return false;                        // Not balanced
      sk.pop();                              // Bracket pair is balanced, pop the opening bracket
    }
  }

  return sk.empty();  // Return true if no unmatched brackets remain
}
