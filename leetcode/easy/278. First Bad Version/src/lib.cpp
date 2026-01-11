/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-22
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/first-bad-version leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return version bad or not
 * @param version {int}
 * @return true | false
 */
bool isBadVersion(int version) {
  return version == BAD_VERSION;
}

/**
 * @brief ### Return the bad version
 * * Constraints: 1 <= bad <= n <= 2^31 - 1
 * @param n {int} - `n` versions
 * @return int
 */
int Solution::firstBadVersion(int n) {
  int first{1}, last{n};

  while (first < last) {
    int mid = (last - first) / 2;
    (isBadVersion(mid)) ? last = mid        // Mid could be the first bad version, so narrow the range to the left half.
                           : first = mid + 1;  // If mid is not bad, the first bad versin must be after mid.
  }

  return first;  // At the end, first will be the first bad version.
}