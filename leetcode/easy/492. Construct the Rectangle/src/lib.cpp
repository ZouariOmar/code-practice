/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-13
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/construct-the-rectangle leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn         Solution::constructRectangle(int)
 * @brief      Return an array [L, W] where L and W are the length and width of the web page you designed in sequence
 * @param area int
 * @return     std::vector<int>
 */
std::vector<int> Solution::constructRectangle(int area) {
  int a = sqrt(area);
  while (area % a) 
    a--;
  return {area / a, a};
}