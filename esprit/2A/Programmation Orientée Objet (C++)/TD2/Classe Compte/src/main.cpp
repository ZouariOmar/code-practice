/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content TD2 @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare an account
  Account A;
  int added_amount{100};
  A.insertInfo();
  A.depositAmount(added_amount); // Add 100dt

  // Declare a bank
  Bank B;
  int n{};
  B.addAcount(A, &n);
  B.showBank(n);

  return EXIT_SUCCESS;
}