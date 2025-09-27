/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to find maximum of each sub-array of size k
 * @param k int
 * @param arr vector<int> &arr
 * @return vector<int>
 */
vector<int> Solution::maxOfSubarrays(vector<int> &arr, int k) {
  size_t n{arr.size()};
  priority_queue<pair<int, int>> pq;
  vector<int> ans;
  int sum{}, st{1};

  for (size_t i{}; i < k; i++)  // Add the first k-arr members
    pq.push({arr[i], i});

  ans.push_back(pq.top().first);  // Push the first result

  for (size_t i = k; i < n; i++) {
    pq.push({arr[i], i});
    while (!pq.empty() && pq.top().second < st) pq.pop();
    ans.push_back(pq.top().first);  // Push the max element of k-arr
    st++;
  }
  return ans;
}