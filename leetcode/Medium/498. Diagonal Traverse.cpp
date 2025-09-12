/**
 * @file      498. Diagonal Traverse.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     498. Diagonal Traverse source file
 * @version   0.1
 * @date      25/08/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/diagonal-traverse leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> findDiagonalOrder(std::vector<std::vector<int>> &mat) {
    size_t m(mat.size()), n(mat[0].size());
    std::vector<int> result(m * n);
    size_t row{}, col{};

    for (int i = 0; i < m * n; i++) {
      result[i] = mat[row][col];
      if ((row + col) & 1) {
        if (row == m - 1)
          ++col;
        else if (!col)
          ++row;
        else
          ++row, --col;
      } else {
        if (col == n - 1)
          ++row;
        else if (!row)
          ++col;
        else
          --row, ++col;
      }
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
