/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1
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
  vector<int> arr = {9, 9, 9, 2, 5};
  Solution sl;

  arr = sl.sortByFreq(arr);

  for (int it : arr)
    cout << it << " ";

  return 0;
}