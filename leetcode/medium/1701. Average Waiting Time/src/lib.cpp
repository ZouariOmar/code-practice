/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/average-waiting-time
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Return the average waiting time of all customers.
 * When a customer arrives, he gives the chef his order, and the chef starts preparing it once he is idle.
 * The customer waits till the chef finishes preparing his order. The chef does not prepare food for more than one customer at a time.
 * The chef prepares food for customers in the order they were given in the input.
 * @param customers
 * @return double
 */
double Solution::averageWaitingTime(vector<vector<int>>& customers) {
  double ans = customers[0][1];
  int timer = customers[0][0] + customers[0][1];
  for (int i = 1; i < customers.size(); i++) {
    if (timer < customers[i][0])
      timer = customers[i][0];
    timer += customers[i][1];
    ans += timer - customers[i][0];
  }
  return ans / customers.size();
}