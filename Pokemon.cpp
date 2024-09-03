#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include <string>

Pokemon::Pokemon(std::string name, int lvl, int hp, int atk, int def, int spAtk,
                 int spDef, int spd) {
  // setting the information
  setName(name);
  setLevel(lvl);

  // setting the stats
  Stats.setHP(hp);
};

// POKEMON INFORMATION
void Pokemon::setName(std::string &name) { pkmName = name; }

void Pokemon::setLevel(int &lvl) { level = lvl; }

// POKEMON STATS

// SETTERS
void Pokemon::Stats::setHP(int &hp) { HP = hp; }

void Pokemon::Stats::setAttack(int &atk) { Attack = atk; }

void Pokemon::Stats::setDef(int &def) { Defense = def; }

void Pokemon::Stats::setSpAttack(int &spAtk) { spAttack = spAtk; }

void Pokemon::Stats::setSpDef(int &spDef) { spDefense = spDef; }

void Pokemon::Stats::setSpd(int &spd) { Speed = spd; }

// GETTERS

int Pokemon::Stats::getHP() { return HP; }

int Pokemon::Stats::getAttack() { return Attack; }

int Pokemon::Stats::getDef() { return Defense; }

int Pokemon::Stats::getSpAttack() { return spAttack; }

int Pokemon::Stats::getSpDef() { return spDefense; }

int Pokemon::Stats::getSpd() { return Speed; }
