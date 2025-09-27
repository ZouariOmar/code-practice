/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-08-2024
 * @link      https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
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
  //* principal vars declaration
  Solution sl;
  Job arr[] = {{1, 1, 100}, {2, 1, 70}};

  // Main problem function
  vector<int> res = sl.JobScheduling(arr, 3);

  //! Testing part
  for (int it : res)
    cout << it << " ";

  return 0;
}
