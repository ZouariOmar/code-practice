/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-28
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/reverse-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse given string
 * @param str {vector<char> &} 
 */
void Solution::reverseString(vector<char> &str) {
  int i{}, j = str.size() - 1;
  while (i < j)
    swap(str[i], str[j]), i++, j--;
}