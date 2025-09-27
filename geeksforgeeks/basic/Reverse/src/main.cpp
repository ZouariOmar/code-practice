/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-09_2024
 * @link      https://www.geeksforgeeks.org/problems/reverse-sub-array5620/1?page=1&sortBy=difficulty
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
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  arr = sl.reverseSubArray(arr, 2, 4);

  for (int it : arr)
    cout << it << " ";

  return 0;
}