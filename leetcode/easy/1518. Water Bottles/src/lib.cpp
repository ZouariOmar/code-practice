/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/water-bottles
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.
 * @param numBottles
 * @param numExchange
 * @return int
 */
int Solution::numWaterBottles(int numBottles, int numExchange) {
  int drinkBottles = numBottles;

  while (numBottles >= numExchange) {
    drinkBottles += numBottles / numExchange;
    numBottles = (numBottles / numExchange) + (numBottles % numExchange);
  }

  return drinkBottles;
}