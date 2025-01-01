#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <string>

using namespace sf;
using namespace std;

Pokemon::Pokemon(){};

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////// BASIC INFORMATION
/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

// POKEMON INFORMATION
void Pokemon::setName(string name) { this->pkmName = name; }

void Pokemon::setGender(int &gender) {} // setGender

void Pokemon::setFirstType(int &type) { this->pkmType[0] = type; }

void Pokemon::setSecondType(int &type) { this->pkmType[1] = type; }

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////// LEVEL
///////////////////////////////////////////////////////////////

void Pokemon::setLevel(int &lvl) { this->pkmLevel = lvl; }

int Pokemon::getLevel() const { return this->pkmLevel; }

/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////// DRAW
//////////////////////////////////////////////////////////////

// Setting gender sprite pos

/// setting sprite pos
void Pokemon::setPartySprPos(unsigned int x, unsigned int y) {
  pkmSprites[PARTY]->setPosition(x, y);
}
void Pokemon::setFrontSprPos(unsigned int x, unsigned int y) {
  pkmSprites[FRONT]->setPosition(x, y);
}
void Pokemon::setBackSprPos(unsigned int x, unsigned int y) {
  pkmSprites[BACK]->setPosition(x, y);
}

// GETTING SPRITES

Sprite Pokemon::getPartySpr() { return *pkmSprites[PARTY]; }

Sprite Pokemon::getFrontSpr() { return *pkmSprites[FRONT]; }

Sprite Pokemon::getBackSpr() { return *pkmSprites[BACK]; }
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// BATTLE
///////////////////////////////////////////////////////////

void Pokemon::HPdmg(double &damage) {

  Stats.setHP(Stats.getHP() - damage);

} // HPdmg

////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

// POKEMON STATS

// getters
std::string Pokemon::getName() { return pkmName; }

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

//////////////////////////////////////////////////////////////
