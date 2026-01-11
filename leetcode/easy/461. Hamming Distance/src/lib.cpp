/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/hamming-distance leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn      Solution::hammingDistance(int, int)
 * @brief   Return the Hamming distance between them.
 * @param x int
 * @param y int
 * @return  int
 */
int Solution::hammingDistance(int x, int y) {
  return std::__popcount(x ^ y);
}