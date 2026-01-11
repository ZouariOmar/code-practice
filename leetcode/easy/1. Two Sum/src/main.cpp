/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/two-sum
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution s;

  vector<int> test_array = {3, 2, 4, 5, 7, 100, 1};

  vector<int> result_array = s.twoSum(test_array, 101);
  
  for (int it : result_array)
    cout << it << ", ";

  return 0;
}
