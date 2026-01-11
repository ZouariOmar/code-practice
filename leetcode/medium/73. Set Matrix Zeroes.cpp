/**
 * @file    73. Set Matrix Zeroes.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   73. Set Matrix Zeroes source file
 * @version 0.1
 * @date    2025-05-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/set-matrix-zeroes leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  void setZeroes(std::vector<std::vector<int>> &matrix) {
    bool zeroinFirstCol = false;
    for (int row{}; row < matrix.size(); row++) {
      if (matrix[row][0] == 0)
        zeroinFirstCol = true;
      for (int col = 1; col < matrix[0].size(); col++)
        if (matrix[row][col] == 0)
          matrix[row][0] = 0, matrix[0][col] = 0;
    }

    for (int row = matrix.size() - 1; row >= 0; row--) {
      for (int col = matrix[0].size() - 1; col >= 1; col--)
        if (matrix[row][0] == 0 || matrix[0][col] == 0)
          matrix[row][col] = 0;
      if (zeroinFirstCol)
        matrix[row][0] = 0;
    }
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
