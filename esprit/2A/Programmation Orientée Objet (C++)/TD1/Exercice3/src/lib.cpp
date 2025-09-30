/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-30
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1430609_1?courseId=_4241_1&view=content TD1  @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Etudiant::Etudiant object
 */
Etudiant::Etudiant()
    : name("NONE"), prename("NONE"), notes(new int[10]{}) {};

/**
 * @brief ### Construct a new Etudiant::Etudiant object
 *
 * @param x string
 * @param y string
 */
Etudiant::Etudiant(string x, string y)
    : name(x), prename(y), notes(new int[10]{}) {};

/**
 * @brief Construct a new Etudiant:: Etudiant object
 *
 * @param y string
 * @param x string
 * @param arr {int *}
 */
Etudiant::Etudiant(string y, string x, int *arr)
    : name(x), prename(y), notes(arr) {
}

/**
 * @brief ### Handel a new Student
 */
void Etudiant::saisir() {
  // Handel name
  cout << "Name......";
  cin >> name;

  cout << endl;

  // Handel prename
  cout << "Prename...";
  cin >> prename;

  // Handel notes
  for (int i{}; i < 10; i++)
    cin >> notes[i];
}

/**
 * @brief ### Show the student info
 */
void Etudiant::afficher() {
  cout << "Name......" << name << endl
       << "Prename..." << prename << endl;

  // Print notes
  for (int i{}; i < 10; i++)
    cout << notes[i] << " ";
  cout << endl;
}

/**
 * @brief ### Calculate the notes average
 *
 * @return float
 */
float Etudiant::moyenne() {
  float sum{};
  for (int i{}; i < 10; i++)
    sum += notes[i];
  return sum / 10;
}
/**
 * @brief ### Return `true` if the notes average if more than `10`, else return `false`
 *
 * @return bool
 */
bool Etudiant::admis() {
  return moyenne() >= 10;
}

/**
 * @brief ###
 *
 * @param e Etudiant
 * @return int
 */
int Etudiant::exae_quo(Etudiant e) {
  float moy_e = e.moyenne();
  float my_moy = this->moyenne();
  return (moy_e > my_moy) ? -1 : (moy_e < my_moy) ? 1
                                                  : 0;
}