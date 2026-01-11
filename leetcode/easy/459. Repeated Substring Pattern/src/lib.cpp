/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/repeated-substring-pattern leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function(s)/Class(es) prototype dev part

/**
 * @fn      Solution::repeatedSubstringPattern(std::string)
 * @brief   check if `s` can be constructed by taking a substring of it and appending multiple copies of the substring together.
 * @param s std::string
 * @return  bool
 */
bool Solution::repeatedSubstringPattern(std::string s) {
  return (s + s).substr(1, (s + s).size() - 2).find(s) != std::string::npos;
}