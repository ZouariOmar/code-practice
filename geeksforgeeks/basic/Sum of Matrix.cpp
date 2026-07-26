/**
 * @file      Sum of Matrix.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Sum of Matrix source file
 * @version   0.1
 * @date      2026-07-25
 * @copyright Copyright (c) 2026
 * @link      https://www.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <numeric>
#include <vector>
using std::vector, std::accumulate;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int sumOfMatrix(vector<vector<int>> &mat) {
    return accumulate(mat.begin(), mat.end(), 0,
                      [](int current_sum, const std::vector<int> &row) -> int {
                        return current_sum + accumulate(row.begin(), row.end(), 0);
                      });
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
