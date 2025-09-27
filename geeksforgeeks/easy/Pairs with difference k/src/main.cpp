/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/pairs-with-difference-k1713/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({1, 5, 3, 4, 2});

  cout << sl.countPairsWithDiffK(arr, 3) << endl;

  return 0;
}