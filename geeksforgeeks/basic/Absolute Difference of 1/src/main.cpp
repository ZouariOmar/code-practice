/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.geeksforgeeks.org/problems/absolute-difference-11156/1?page=1&sortBy=difficulty
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
  vector<int> arr = {7, 98, 56, 43, 45, 23, 12, 8};
  int k{54};

  arr = sl.getDigitDiff1AndLessK(arr, k);

  //! Testing part
  for (int it : arr)
    cout << it << " ";

  return 0;
}