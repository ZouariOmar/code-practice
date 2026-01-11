/**
 * @file    566. Reshape the Matrix.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   566. Reshape the Matrix source file
 * @version 0.1
 * @date    2025-06-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/reshape-the-matrix leetcode @endlink
 */

//? Include prototype declaration part
#include <cstddef>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part

/**
 * @class Solution
 * @brief Solution class
 * @details
 * - Constraints:
 *     m == mat.length
 *     n == mat[i].length
 *     1 <= m, n <= 100
 *     -1000 <= mat[i][j] <= 1000
 *     1 <= r, c <= 300
 */
class Solution {
public:
  std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>> &mat, int r, int c) {
    size_t rows(mat.size()), cols(mat[0].size());
    if (rows * cols != r * c)
      return mat;
    size_t idx{}, jdx{};
    std::vector<std::vector<int>> result(r);
    for (size_t i{}; i < r; i++) {
      std::vector<int> lvl(c);
      for (size_t j{}; j < c; j++) {
        if (jdx == cols)
          jdx = 0, idx++;
        lvl[j] = mat[idx][jdx++];
      }
      result[i] = lvl;
    }
    return result;
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
