/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/lucky-numbers-in-a-matrix
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  vector<vector<int>> matrix = {
      {3, 7, 8},
      {9, 11, 13},
      {15, 16, 17}};

  vector<int> res = sl.luckyNumbers(matrix);

  for (int it : res)
    cout << it << " ";

  return 0;
}
