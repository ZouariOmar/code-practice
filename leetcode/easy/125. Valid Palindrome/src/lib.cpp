/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-11
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/valid-palindrome leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given a string s, return true if it is a palindrome, or false otherwise (after conversation).
 * @param s {string}
 * @return true or false
 */
bool Solution::isPalindrome(string s) {
  // Del the non-alphanumeric chars and make the alpha char lowercase
  for_each(s.begin(), s.end(), [&](unsigned char c) {
    if (isalpha(c) || isdigit(c))
      alphanumeric_string.push_back(tolower(c));
  });

  size_t i{}, j{alphanumeric_string.size() - 1};
  while (j >= i) {
    if (alphanumeric_string[j] != alphanumeric_string[i])  // Non palindrome condition ==> return false
      return false;
    i++;
    j--;
  }

  return true;
}

/*
* Other solution
  bool Solution::isPalindrome(string s) {
    int start=0;
    int end=s.size()-1;
    while(start<=end) {
        if(!isalnum(s[start])){start++; continue;}
        if(!isalnum(s[end])){end--;continue;}
        if(tolower(s[start])!=tolower(s[end]))return false;
        else{
            start++;
            end--;
        }
    }
    return true;
}
*/