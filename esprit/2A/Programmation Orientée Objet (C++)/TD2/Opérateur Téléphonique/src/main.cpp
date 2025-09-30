/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content Blackboard @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Subscriber sb;
  sb.addInfo();
  sb.addAmount(12.85);
  sb.showSubscriber();
  cout << boolalpha << sb.substractAmount(10000, 54.445F) << endl;
  sb.showSubscriber();
  return EXIT_SUCCESS;
}