/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  vector<int> arr({-1, -2, -3, 4, 5, 6, 7});

  // Declare object part
  Solution sl;

  sl.leftRotate(arr, 2);

  for (int it : arr)
    cout << it << " ";

  return 0;
}