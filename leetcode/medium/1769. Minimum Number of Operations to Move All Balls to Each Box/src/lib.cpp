/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array answer of size `n`, where `answer[i]` is the minimum number of operations needed to move all the balls to the ith box.
 *
 * @param boxes string
 * @return vector<int>
 */
vector<int> Solution::minOperations(string boxes) {
  int n = boxes.size();
  vector<int> operations(n, 0);

  // Left to right pass
  int count = 0, steps = 0;
  for (int i = 0; i < n; i++) {
    operations[i] += steps;
    count += (boxes[i] == '1');
    steps += count;
  }

  // Right to left pass
  count = 0, steps = 0;
  for (int i = n - 1; i >= 0; i--) {
    operations[i] += steps;
    count += (boxes[i] == '1');
    steps += count;
  }

  return operations;
}