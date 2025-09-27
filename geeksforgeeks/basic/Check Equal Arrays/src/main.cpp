/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&sortBy=difficulty
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
  vector<int> arr1 = {2, 4, 5, 0, 1},
              arr2 = {0, 1, 2, 4, 5};

  cout << boolalpha << sl.check(arr1, arr2) << endl;

  return 0;
}