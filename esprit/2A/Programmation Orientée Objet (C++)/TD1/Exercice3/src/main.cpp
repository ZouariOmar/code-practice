/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-30
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1430609_1?courseId=_4241_1&view=content TD1  @endlink
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
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
  Etudiant student1;
  Etudiant student2("ismail", "naifar", arr2);

  student1.saisir();

  student1.afficher();
  student2.afficher();

  cout << student1.exae_quo(student2) << endl; // Expected: -1
  return 0;
}