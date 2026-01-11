/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-ways-to-arrive-at-destination leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Solution sl;
  std::vector<std::vector<int>> roads({{0, 6, 7}, {0, 1, 2}, {1, 2, 3}, {1, 3, 3}, {6, 3, 3}, {3, 5, 1}, {6, 5, 1}, {2, 5, 1}, {0, 4, 5}, {4, 6, 2}});
  std::cout << sl.countPaths(7, roads) << '\n';
  return EXIT_SUCCESS;
}