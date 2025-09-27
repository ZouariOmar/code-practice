/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  // Declare vars part
  Solution sl;
  vector<int> arr({3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2});

  cout << sl.maxDistance(arr) << endl;

  return 0;
}