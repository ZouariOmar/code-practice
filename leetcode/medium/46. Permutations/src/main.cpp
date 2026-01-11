/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/permutations
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  vector<int> array = {1, 2, 3};
  vector<vector<int>> result = sl.permute(array);

  for (int i = 0; i < result.size(); i++) {
    for (int j = 0; j < result[i].size(); j++)
      cout << result[i][j] << " ";
    cout << "\n";
  }

  return 0;
}
