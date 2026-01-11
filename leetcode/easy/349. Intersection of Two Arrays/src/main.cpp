/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/intersection-of-two-arrays
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  vector<int> arr1 = {4, 9, 5}, arr2 = {9, 4, 9, 8, 4};
  Solution sl;

  vector<int> res = sl.intersection(arr2, arr1);

  for (int it : res)
    cout << it << " ";

  return 0;
}