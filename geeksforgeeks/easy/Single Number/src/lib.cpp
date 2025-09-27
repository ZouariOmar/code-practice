/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/single-number1014/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find that number occurring an odd number of times
 * @param arr vector<int> &
 * @return int
 */
int Solution::getSingle(vector<int> &arr) {
  unordered_map<int, int> TrackOddOcc;

  for (int &it : arr)
    TrackOddOcc[it]++;

  for (unordered_map<int, int>::iterator it = TrackOddOcc.begin(); it != TrackOddOcc.end(); it++)
    if (it->second & 1) return it->first;

  return 0;
}