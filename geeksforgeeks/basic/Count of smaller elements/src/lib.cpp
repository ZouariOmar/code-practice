/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-12
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/count-of-smaller-elements5947/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the count of elements less than or equal to the given element `x`.
 * @param x int
 * @param arr vector<int> &
 * @return int
 */
int Solution::countOfElements(int x, vector<int> &arr) {
  return count_if(arr.begin(), arr.end(), [x](int y) {
    return y <= x;
  });
}