/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-08
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/design-a-number-container-system leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new NumberContainers::NumberContainers object
 */
NumberContainers::NumberContainers() {
}

/**
 * @brief ### Insert or Replace a number at the given index in the system.
 *
 * @param idx int
 * @param nbr int
 */
void NumberContainers::change(int i, int n) {
  if (m.count(i) && m[i] == n)
    return;
  m[i] = n;
  d[n].push(i);
}

/**
 * @brief ### Return the smallest index for the given number in the system.
 *
 * @param nbr int
 * @return int
 */
int NumberContainers::find(int n) {
  if (!d.count(n))
    return -1;
  auto &pq = d[n];
  while (!pq.empty() && m[pq.top()] != n)
    pq.pop();
  return pq.empty() ? -1 : pq.top();
}