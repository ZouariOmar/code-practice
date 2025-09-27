/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/total-count2415/1 GFF @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  // Declare vars
  int k{4};
  vector<int> arr({10, 2, 3, 4, 7});
  Solution sl;

  cout << sl.totalCount(k, arr) << endl;

  return 0;
}