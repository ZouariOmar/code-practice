/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-07-2024
 * @link      https://leetcode.com/problems/sort-the-people
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
  vector<int> hight = {180, 165, 170};
  vector<string> names = {"Mary", "John", "Emma"};

  // Lance the solution
  sl.sortPeople(names, hight);

  // See the result
  for (string it : names)
    cout << it << " ";

  return 0;
}