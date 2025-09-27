/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      10-09-2024
 * @link      https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 * @param arr vector<long long>
 * @return long long
 */
long long Solution::minCost(vector<long long> &arr) {
  priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
  long long int ans{};

  while (pq.size() > 1) {
    long long a = pq.top();
    pq.pop();
    long long b = pq.top();
    pq.pop();

    long long c = a + b;
    pq.push(c);
    ans += c;
  }

  return ans;
}