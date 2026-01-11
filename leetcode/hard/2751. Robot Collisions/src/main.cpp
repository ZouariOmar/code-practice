/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/robot-collisions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;

  vector<int> positions = {5, 4, 3, 2, 1},
              healths = {2, 17, 9, 15, 10};

  healths = sl.survivedRobotsHealths(positions, healths, "RRRRR");

  for (int it : healths)
    cout << it << " ";

  return 0;
}
