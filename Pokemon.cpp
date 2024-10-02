#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <array>
#include <iostream>
#include <ostream>
#include <string>

using namespace sf;
using namespace std;

Pokemon::Pokemon(){};

// Pokemon Textures
Texture Pokemon::pkmTxt[3];

// Sprites
Sprite Pokemon::pkmSprites[3];

///////DESTRUCTOR
Pokemon::~Pokemon() {

  // delete[] level;
  // level = 0;

} // DESTRUCTOR

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////// BASIC INFORMATION
/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

// POKEMON INFORMATION
void Pokemon::setName(string &name) { this->pkmName = name; }

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

void Pokemon::setGenderPos(int &x, int &y) {

  FloatRect pPkmGenderRec;
  pPkmGenderRec = this->pkmGenderSpr.getLocalBounds();

  this->pkmGenderSpr.setOrigin(pPkmGenderRec.left - pPkmGenderRec.width / 2,
                               pPkmGenderRec.top - pPkmGenderRec.height / 2);

  this->pkmGenderSpr.setPosition(x, y);
} // gender pos

/// setting sprite pos

void Pokemon::setSprPos(int &x, int &y, int spr) {

  FloatRect sprRect;
  sprRect = pkmSprites[spr].getLocalBounds();

  pkmSprites[spr].setOrigin(sprRect.left + sprRect.width / 2,
                            sprRect.top + sprRect.height / 2);

  pkmSprites[spr].setPosition(x, y);

} // setSprPos

///////////////////////////////////////////////////////////
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
std::string Pokemon::getName() const { return pkmName; }

Sprite Pokemon::getGender() const { return pkmGenderSpr; }

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
