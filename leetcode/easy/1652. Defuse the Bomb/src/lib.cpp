/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-18
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/defuse-the-bomb/?envType=daily-question&envId=2024-11-18 leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

vector<int> Solution::decrypt(vector<int> &arr, int k) {
  int n = arr.size();  // circular array
  vector<int> result(n);

  if (k == 0) return result;

  int wSum = 0;
  int start = (k > 0) ? 1 : n + k;
  int end = (k > 0) ? k : n - 1;

  for (int i = start; i <= end; i++)
    wSum += arr[i % n];

  for (int i = 0; i < n; i++) {
    result[i] = wSum;
    wSum -= arr[(start + i) % n];
    wSum += arr[(end + i + 1) % n];
  }

  return result;
}