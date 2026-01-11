/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-01
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/delete-characters-to-make-fancy-string leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a fancy string
 * @param s string
 * @return string
 */
string Solution::makeFancyString(string s) {
  string ans("");       // Answer holder
  ans.push_back(s[0]);  // Push the first char
  size_t n{s.size()},   // Length of the string `s`
      cnt = 1;          // Track the consecutive characters

  for (size_t i{1}; i < n; i++) {
    if (s[i] == ans.back()) {
      cnt++;
      if (cnt < 3) ans.push_back(s[i]);  // No 3 consecutive characters are equal
    } else {
      cnt = 1;
      ans.push_back(s[i]);
    }
  }

  return ans;  // Return the answer
}

/*
* Other solution
if(s.length()<3)
  return s;
int j = 2;
for (int i = 2; i < s.size(); ++i)
  if (s[i] != s[j - 1] || s[i] != s[j - 2])
    s[j++] = s[i];
s.resize(j);
return s;
*/