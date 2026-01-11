/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  std::vector<int> rowSum = {3, 8};
  std::vector<int> colSum = {4, 7};

  std::vector<std::vector<int>> result = sl.restoreMatrix(rowSum, colSum);

  for (const auto& row : result) {
    for (int value : row) {
      std::cout << value << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
