/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-30
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1430609_1?courseId=_4241_1&view=content TD1  @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Etudiant {
private:
  string name, prename;
  int *notes;

public:
  // Contractors
  Etudiant();
  Etudiant(string, string);
  Etudiant(string, string, int *);

  // Custom public functions
  void saisir();
  void afficher();
  float moyenne();
  bool admis();
  int exae_quo(Etudiant);
}; // Etudiant class

#endif // __INC_HPP__