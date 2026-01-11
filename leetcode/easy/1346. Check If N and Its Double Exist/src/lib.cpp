/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-01
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/check-if-n-and-its-double-exist leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// /**
//  * @brief ### check if there exist two indices i and j such that :
//  * *
//  * - i != j
//  * *
//  * - 0 <= i, j < arr.length
//  * *
//  * - arr[i] == 2 * arr[j]
//  * ! 45 / 111 testcases passed
//  * @return true | false
//  */
// bool Solution::checkIfExist(vector<int> &arr) {
//   sort(arr.begin(), arr.end());  // Sort the vector `arr` int asending order
//   size_t i{}, j{arr.size() - 1};
//   while (i < j) {
//     int op{arr[i] * 2};
//     if (op == arr[j])
//       return true;
//     else if (op < arr[j])
//       i++;
//     else
//       j--;
//   }
//   return false;
// }

/**
 * @brief ### check if there exist two indices i and j such that :
 * *
 * - i != j
 * *
 * - 0 <= i, j < arr.length
 * *
 * - arr[i] == 2 * arr[j]
 * @return true | false
 */
bool Solution::checkIfExist(vector<int> &arr) {
  unordered_set<int> seen;
  for (int &num : arr) {
    if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2)))
      return true;
    seen.insert(num);
  }
  return false;
}