/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-11
 * @copyright Copyright (c) 2025
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Player {
private:
  int id,
      age,
      annee,
      valeur;
  string nom, poste;

public:
  Player(int, int, int, int, string, string);
  virtual void addPlayer();
  virtual void show();
  int get_id();
  string get_post();
  int get_annee();
  int get_valeur();

}; // Player class

class PlayerStar : public Player {
private:
  int nb_buts;

public:
  PlayerStar(int, int, int, int, string, string, int);
  void show() override;
  void addPlayer() override;

}; // PlayerStar

class Team {
private:
  string name,
      coach;
  vector<PlayerStar> players;

public:
  Team(string, string);
  void addNewPlayer(PlayerStar);
  void show_with_post(string);
  void clear(int);
  void mostExp();
}; // Team class

#endif // __INC_HPP__
