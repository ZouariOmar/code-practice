/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-06
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/pascals-triangle leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  Solution sl;

  vector<vector<int>> arr(sl.generate(5));

  for (size_t i{}; i < arr.size(); i++) {
    for (size_t j{}; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}