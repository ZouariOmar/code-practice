/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-07-10
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/crawler-log-folder
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  vector<string> array = {
      "d1/", "d2/", "./", "d3/", "../", "d31/"};

  cout << sl.minOperations(array) << endl;

  return 0;
}
