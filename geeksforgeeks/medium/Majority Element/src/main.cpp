/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-08-2024
 * @link      https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  int arr[] = {2, 2, 5, 1, 2, 2};

  cout << sl.majorityElement(arr, 6) << endl;

  return 0;
}