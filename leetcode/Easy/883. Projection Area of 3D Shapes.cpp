/**
 * @file      883. Projection Area of 3D Shapes.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     883. Projection Area of 3D Shapes source file
 * @version   0.1
 * @date      2025-10-30
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/projection-area-of-3d-shapes leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int projectionArea(std::vector<std::vector<int>> &grid) {
    int res{};

    for (size_t i{}, n(grid.size()); i < n; ++i) {
      int x{}, y{};
      for (size_t j{}, nn(grid[i].size()); j < nn; ++j) {
        x = std::max(x, grid[i][j]);
        y = std::max(y, grid[j][i]);
        if (grid[i][j])
          ++res;
      }
      res += x + y;
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
