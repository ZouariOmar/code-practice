/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-28
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1?page=2&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return all the unique pairs `[arr[i], arr[j]]` such that `i != j` and `arr[i] + arr[j] == 0`.
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::getPairs(vector<int> &arr) {
  set<vector<int>> ans;
  sort(arr.begin(), arr.end());
  int n{arr.size()}, i{}, j{n - 1};
  while (i < j) {
    int sum = arr[i] + arr[j];
    if (!sum)
      ans.insert({arr[i++], arr[j--]});
    else if (sum < 0)
      i++;
    else
      j--;
    }
  vector<vector<int>> res(ans.begin(), ans.end());
  return res;
}