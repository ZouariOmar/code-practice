/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-11
 * @copyright Copyright (c) 2025
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Team eq("css", "omarZouari");
  eq.addNewPlayer(PlayerStar(1, 15, 2000, 14444, "trump", "none", 14));
  // eq.show_with_post("none");
  // eq.clear(2002);
  eq.mostExp();
  return EXIT_SUCCESS;
}
