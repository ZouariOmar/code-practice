/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-08-2024
 * @link      https://leetcode.com/problems/kth-distinct-string-in-an-array
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  //* principal vars declaration part
  Solution sl;
  vector<string> arr = {"aaa", "aa", "a"};

  cout
      << sl.kthDistinct(arr, 1) << endl;

  return 0;
}