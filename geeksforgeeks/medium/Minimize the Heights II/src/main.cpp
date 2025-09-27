/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-09-2024
 * @link      https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
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
  vector<int> arr = {1, 8, 10, 6, 4, 6, 9, 1};
  Solution sl;

  cout << sl.getMinDiff(arr, 7) << endl;

  return 0;
}