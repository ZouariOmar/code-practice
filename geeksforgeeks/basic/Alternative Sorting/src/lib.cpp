/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-25
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/alternative-sorting1311/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Rearrange the array in such a way that the first element is the largest and the second element is the smallest,
 * the third element is the second largest and the fourth element is the second smallest, and so on.
 * @param arr vector<int> &
 * @return vector<int>
 */
vector<int> Solution::alternateSort(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  vector<int> ans;
  size_t n{arr.size()}, i{}, j{n - 1};
  while (i < j) {
    ans.push_back(arr[j]);
    ans.push_back(arr[i]);
    i++;
    j--;
  }
  if (n % 2 == 1)
    ans.push_back(arr[i]);
  return ans;
}