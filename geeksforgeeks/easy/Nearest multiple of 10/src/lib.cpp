/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-19
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/nearest-multiple-of-102437/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Round str to the nearest multiple of 10
 * @param str string
 * @return string
 */
string Solution::roundToNearest(string str) {
  size_t n{str.size()};

  // base case
  if (str[n - 1] == '0')
    return str;

  // 0 < last digit < 6
  else if (str[n - 1] < '6') {
    str[n - 1] = '0';
    return str;
  }

  // else, 5 < last digit <= 9
  str[n - 1] = '0';
  int i{n - 2};
  while (str[i] == '9' && i >= 0) {
    str[i] = '0';
    i--;
  }

  if (i < 0)  // if all are '9' ex. 99997
    return '1' + str;
  else  // like example: 1239998
    str[i] = (str[i] + 1);

  return str;
}
