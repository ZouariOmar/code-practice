/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-03
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/rotate-string leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if and only if s can become goal after some number of shifts on s
 * @param s string
 * @param goal string
 * @return true or false
 */
bool Solution::rotateString(string s, string goal) {
  return (s.length() == goal.length() && (s + s).find(goal) != -1);
}