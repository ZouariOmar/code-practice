/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-11
 * @copyright Copyright (c) 2025
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

Player::Player(int _id, int _age, int _annee, int _valeur, string _nom, string _poste)
    : id(_id),
      annee(_annee),
      valeur(_valeur),
      nom(_nom),
      poste(_poste) {};

void Player::show() {
  cout << "id..." << id << '\n'
       << "age..." << age << '\n'
       << "annee..." << annee << '\n'
       << "valeur..." << valeur << '\n'
       << "nom..." << nom << '\n'
       << "poste..." << poste << '\n';
}

void Player::addPlayer() {
  cin >> id >> age >> annee >> valeur >> nom >> poste;
}

int Player::get_id() {
  return id;
}

string Player::get_post() {
  return poste;
}

int Player::get_annee() {
  return annee;
}

int Player::get_valeur() {
  return valeur;
}

PlayerStar::PlayerStar(int _id, int _age, int _annee, int _valeur, string _nom, string _poste, int _nb_buts)
    : nb_buts(_nb_buts),
      Player(_id, _age, _annee, _valeur, _nom, _poste) {};

void PlayerStar::show() {
  Player::show();
  cout << "nomber de buts..." << nb_buts << '\n';
}

void PlayerStar::addPlayer() {
  Player::addPlayer();
  cin >> nb_buts;
}

void Team::addNewPlayer(PlayerStar player) {
  for (PlayerStar p : players)
    if (player.get_id() == p.get_id()) {
      cerr << "Can't add this player" << '\n';
      return;
    }
  // Can add the palyer
  players.push_back(player);
}

Team::Team(string _name, string _coach)
    : name(_name),
      coach(_coach),
      players({}) {
}

void Team::show_with_post(string _poste) {
  for (vector<PlayerStar>::iterator it = players.begin(); it != players.end(); it++)
    if (it->get_post() == _poste)
      it->show();
}

void Team::clear(int _annee) {
  vector<PlayerStar> newPlayers;
  for (vector<PlayerStar>::iterator it = players.begin(); it != players.end(); it++)
    if (abs(_annee - it->get_annee() < 1))
      newPlayers.push_back(*it);
  players = newPlayers;
}

void Team::mostExp() {
  if (players.empty())
    return;
  PlayerStar max_js{players[0]};
  for (vector<PlayerStar>::iterator it = players.begin(); it != players.end(); it++)
    if (it->get_valeur() > max_js.get_valeur())
      max_js = *it;

  // We find that player
  max_js.show();
}
