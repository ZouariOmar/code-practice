/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
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
  std::vector<std::vector<int>> adj({{2, 3, 1}, {0}, {0, 4}, {0}, {2}});
  std::vector<int> arr = sl.dfsOfGraph(adj);
  for (const int &it : arr)
    std::cout << it << " ";
  return EXIT_SUCCESS;
}