/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-14
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-good-triplets leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

int Solution::countGoodTriplets(std::vector<int> &arr, int a, int b, int c) {
  int result{};

  for (int i = 0; i < arr.size() - 2; i++) {
    for (int k = i + 2; k < arr.size(); k++) {
      if (abs(arr[k] - arr[i]) > c)
        continue;
      for (int j = i + 1; j < k; j++)
        if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b)
          ++result;
    }
  }

  return result;
}