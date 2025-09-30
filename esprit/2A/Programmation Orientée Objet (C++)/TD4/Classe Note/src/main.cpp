/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1579548_1?courseId=_4241_1&view=content TD4 @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // ! Testing part
  Notes n1(10, 12, 15, 11, 17, 9.5),
      n2(11.5, 13, 18, 10, 12.5);
  cout << boolalpha << (n1 > n2) << endl;
  return EXIT_SUCCESS;
}