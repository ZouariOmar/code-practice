/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      14-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  int arr[] = {1, 2, 0, 2, 2};

  sl.sort012(arr, 5);

  for (auto &&i : arr)
    cout << i << endl;

  return 0;
}