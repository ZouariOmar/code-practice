/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/intersection-of-two-arrays-ii
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The main program function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  // Principal vars declaration part
  vector<int> arr1 = {1, 2, 2, 1}, arr2 = {2, 2};
  Solution sl;

  //* The result
  vector<int> res = sl.intersect(arr1, arr2);

  // Show the result
  for (int it : res)
    cout << it << " ";

  return 0;
}
