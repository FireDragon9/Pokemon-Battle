#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <array>
#include <iostream>

Pokemon::Pokemon(std::string name, int lvl, double hp, int atk, int def,
                 int spAtk, int spDef, int spd) {
  // setting the information
  setName(name);
  setLevel(lvl);

  // setting the stats
  Stats.setHP(hp);

  std::array<Movs, 4> pkmMovs;
};

// POKEMON INFORMATION
void Pokemon::setName(std::string &name) { pkmName = name; }

void Pokemon::setLevel(int &lvl) { level = lvl; }

void Pokemon::setFirstType(int type) { pkmType[0] = type; }

void Pokemon::setSecondType(int type) { pkmType[1] = type; }

///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// BATTLE
///////////////////////////////////////////////////////////

void Pokemon::HPdmg(double damage) {

  Stats.setHP(Stats.getHP() - damage);

} // HPdmg

////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

// POKEMON STATS

// getters
std::string Pokemon::getName() { return pkmName; }

int Pokemon::getLevel() { return level; }

int Pokemon::getFirstType() const { return pkmType[0]; }
int Pokemon::getSecondType() const { return pkmType[1]; }

// SETTERS
void Pokemon::Stats::setHP(double hp) { HP = hp; }

void Pokemon::Stats::setAttack(int &atk) { Attack = atk; }

void Pokemon::Stats::setDef(int &def) { Defense = def; }

void Pokemon::Stats::setSpAttack(int &spAtk) { spAttack = spAtk; }

void Pokemon::Stats::setSpDef(int &spDef) { spDefense = spDef; }

void Pokemon::Stats::setSpd(int &spd) { Speed = spd; }

// GETTERS

double Pokemon::Stats::getHP() { return HP; }

int Pokemon::Stats::getAttack() { return Attack; }

int Pokemon::Stats::getDef() { return Defense; }

int Pokemon::Stats::getSpAttack() { return spAttack; }

int Pokemon::Stats::getSpDef() { return spDefense; }

int Pokemon::Stats::getSpd() { return Speed; }
