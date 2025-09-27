/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
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
  vector<int> arr = {12, 7, 5, 1, 13, 1, 10, 8, 11, 9, 2, 4, 3, 6};
  int n = arr.size();

  arr = sl.findTwoElement(arr, n);

  for (int it : arr)
    cout << it << " ";

  return 0;
}