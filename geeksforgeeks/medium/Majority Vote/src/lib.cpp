/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/majority-vote/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to find the majority elements in the array
 * @param arr vector<int> &
 * @return vector<int>
 */
vector<int> Solution::findMajority(vector<int> &arr) {
  vector<int> res;
  map<int, int> mp;
  size_t len{arr.size() / 3};  // Size of the `arr` vector divide it by 3

  // Vector to Umap
  for (int it : arr) mp[it]++;

  map<int, int>::iterator it = mp.begin();
  while (it != mp.end()) {
    if (it->second > len) res.push_back(it->first);
    it++;
  }

  //* If No candidate occur more than n / 3 times, we return -1
  if (res.empty()) res.push_back(-1);

  return res;
}