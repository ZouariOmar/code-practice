/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
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
  string str = "ab";
  vector<string> arr = {"ad", "bd", "aaab", "baa", "badab"};

  cout << sl.countConsistentStrings(str, arr) << endl;

  return 0;
}