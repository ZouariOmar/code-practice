/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  // Declare vars/objects
  Solution sl;
  vector<int> arr({2, 2, 2});

  cout << sl.countMaxOrSubsets(arr) << endl;

  return 0;
}