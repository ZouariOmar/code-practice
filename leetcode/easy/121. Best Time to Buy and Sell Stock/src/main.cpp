/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/best-time-to-buy-and-sell-stock leecode @endlink
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
  vector<int> arr({7,6,4,3,1});
  Solution sl;

  cout << sl.maxProfit(arr) << endl;

  return 0;
}