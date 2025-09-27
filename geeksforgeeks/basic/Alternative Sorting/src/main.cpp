/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-25
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/alternative-sorting1311/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // declare vars/objs
  Solution sl;
  vector<int> arr({7, 1, 2, 3, 4, 5, 6});

  arr = sl.alternateSort(arr);

  for (int &it : arr)
    cout << it << " ";

  return 0;
}