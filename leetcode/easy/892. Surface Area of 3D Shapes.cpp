/**
 * @file      892. Surface Area of 3D Shapes.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     892. Surface Area of 3D Shapes source file
 * @version   0.1
 * @date      2025-11-07
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/surface-area-of-3d-shapes leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int surfaceArea(std::vector<std::vector<int>> &grid) {
    size_t n = grid.size();
    unsigned int res = 0;
    for (size_t i{}; i < n; ++i) {
      for (size_t j{}; j < n; ++j) {
        if (!grid[i][j])
          continue;
        res += grid[i][j] * 6 - 2 * (grid[i][j] - 1);
        if (i < n - 1)
          res -= 2 * std::min(grid[i][j], grid[i + 1][j]);
        if (j < n - 1)
          res -= 2 * std::min(grid[i][j], grid[i][j + 1]);
      }
    }
    return res;
  }
}; // Solution class

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
