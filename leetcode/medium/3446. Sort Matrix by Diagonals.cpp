/**
 * @file      3446. Sort Matrix by Diagonals.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3446. Sort Matrix by Diagonals source file
 * @version   0.1
 * @date      08/28/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/sort-matrix-by-diagonals leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  vector<vector<int>> sortMatrix(vector<vector<int>> &grid) {
    int n = grid.size(), m = grid[0].size();
    unordered_map<int, priority_queue<int>> maxHeaps;
    unordered_map<int, priority_queue<int, vector<int>, std::greater<int>>> minHeaps;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int key = i - j;
        if (key < 0)
          minHeaps[key].push(grid[i][j]);
        else
          maxHeaps[key].push(grid[i][j]);
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int key = i - j;
        if (key < 0) {
          grid[i][j] = minHeaps[key].top();
          minHeaps[key].pop();
        } else {
          grid[i][j] = maxHeaps[key].top();
          maxHeaps[key].pop();
        }
      }
    }
    return grid;
  }
};

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
