/**
 * @file      766. Toeplitz Matrix.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     766. Toeplitz Matrix source file
 * @version   0.1
 * @date      18/09/2025
 * @copyright Copyright (c) 2025
 * @link      leetcode.com/problems/toeplitz-matrix leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool isToeplitzMatrix(std::vector<std::vector<int>> &matrix) {
    size_t rows(matrix.size()), cols(matrix[0].size());
    for (size_t i{}; i < rows - 1; ++i) {
      for (size_t j{}; j < cols - 1; ++j) {
        if (matrix[i][j] != matrix[i + 1][j + 1])
          return false;
      }
    }
    return true;
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
