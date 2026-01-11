/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/find-the-winner-of-the-circular-game
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Find the Winner of the Circular Game.
 * Given the number of friends, n, and an integer k, return the winner of the game.
 * @param n
 * @param k
 * @return int
 */
int Solution::findTheWinner(int n, int k) {
  vector<int> array;

  // Fill the array vector (exp: array = {1, 2, 3, 4, 5})
  for (int i = 1; i < n + 1; i++)
    array.push_back(i);

  int i = 0;
  while (array.size() != 1) {
    int next_to_remove = (i + k - 1) % array.size();

    // Del the selected player
    array.erase(array.begin() + next_to_remove);

    i = next_to_remove;
  }

  return array[0];
}