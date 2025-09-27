/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-23
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/reducing-walls4443/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ###  Find the minimum number of operation such that all the elements in the array becomes less or equal to k.
 * @param arr {vector<int> &}
 * @param k {int}
 * @return int
 */
int Solution::reducingWalls(vector<int> &arr, int k) {
  int res{};
  for (int &it : arr)
    if (it > k) res += (it - 1) / k;
  return res;
}