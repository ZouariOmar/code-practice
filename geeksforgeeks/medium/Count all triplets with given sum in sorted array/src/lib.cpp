/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-04
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-all-triplets-with-given-sum-in-sorted-array/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Count triplets (i, j, k) of valid indices, such that arr[i] + arr[j] + arr[k] = target and i < j < k.
 *
 * @param arr {vector<int> &}
 * @param target int
 * @return int
 */
int Solution::countTriplets(vector<int> &arr, int target) {
  int res{};
  for (int i = 0; i < arr.size() - 2; i++) {
    int left = i + 1,
        right = arr.size() - 1;
    while (left < right) {
      int sum = arr[i] + arr[left] + arr[right];
      if (sum > target)
        right -= 1;
      else if (sum < target)
        left += 1;
      else if (sum == target) {
        int ele1 = arr[left], ele2 = arr[right],
            cnt1{}, cnt2{};
        while (left <= right && ele1 == arr[left]) {
          cnt1++;
          left++;
        }
        while (left <= right && ele2 == arr[right]) {
          cnt2++;
          right--;
        }
        if (ele1 == ele2)
          res += (cnt1 * (cnt1 - 1)) / 2;
        else
          res += (cnt1 * cnt2);
      }
    }
  }
  return res;
}