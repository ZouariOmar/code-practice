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
  vector<int> arr = {1, 2, 3};
  int m = 1, n = 3;

  vector<vector<int>> res = sl.construct2DArray(arr, n, m);

  for (size_t i{}; i < m; i++) {
    for (size_t j{}; j < n; j++)  
      cout << res[i][j] << " ";
    cout << endl;
  } 
    

  return 0;
}