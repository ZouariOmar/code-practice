/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the pair in sorted order and if there are multiple such pairs return the pair with maximum absolute difference. If no such pair exists return an empty array.
 *
 * @param arr {vector<int> &}
 * @param target int
 * @return vector<int>
 */
vector<int> Solution::sumClosest(vector<int> &arr, int target) {
  int n = arr.size();

  sort(arr.begin(), arr.end());

  int low = 0, high = n - 1;

  int closest = INT_MAX;
  int maxAbsDiff = INT_MIN;
  pair<int, int> maxAbsPair({-1, -1});

  while (low < high) {
    int sum = arr[low] + arr[high];
    int diff = abs(sum - target);

    if (diff < closest) {
      closest = diff;
      maxAbsDiff = abs(arr[low] - arr[high]);
      maxAbsPair = {arr[low], arr[high]};
    } else if (diff == closest) {
      if (abs(arr[low] - arr[high]) > maxAbsDiff) {
        maxAbsDiff = abs(arr[low] - arr[high]);
        maxAbsPair = {arr[low], arr[high]};
      }
    }

    if (sum < target) {
      low++;
    } else {
      high--;
    }
  }

  if (maxAbsPair.first == -1 && maxAbsPair.second == -1) {
    return {};
  }

  return {maxAbsPair.first, maxAbsPair.second};
}