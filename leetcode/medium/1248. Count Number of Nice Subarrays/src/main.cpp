/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/count-number-of-nice-subarrays/description
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution S;
  vector array = {2,2,2,1,2,2,1,2,2,2};

  cout << S.numberOfSubarrays(array, 2) << endl;

  return 0;
}
