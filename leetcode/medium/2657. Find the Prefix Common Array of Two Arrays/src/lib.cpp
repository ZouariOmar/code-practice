/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-14
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the prefix common array of A and B.
 *
 * @param A {vector<int> &}
 * @param B {vector<int> &}
 * @return vector<int>
 */
vector<int> Solution::findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
  int n = A.size(),
      common{};
  vector<int> freq(n + 1, 0), ans;
  for (int i{}; i < n; i++) {
    if (++freq[A[i]] == 2)
      common++;
    if (++freq[B[i]] == 2)
      common++;
    ans.push_back(common);
  }
  return ans;
}