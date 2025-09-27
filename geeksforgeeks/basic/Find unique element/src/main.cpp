/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/find-unique-element2632/1?page=1&sortBy=difficulty GFG @endlink
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
  vector<int> arr({6, 2, 5, 2, 2, 6, 6});

  cout << sl.findUnique(3, arr) << endl;

  return 0;
}