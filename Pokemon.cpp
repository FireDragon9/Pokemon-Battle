#include "SFML/include/Graphics.hpp"
#include <string>

#include "Movs.h"
#include "Pokemon.h"

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


/// setting sprite pos

void Pokemon::Spr::setSprPos(const int &spr, const int &x, const int &y){


  pkmSprites[spr]->setPosition(x, y);

}//setSprPos

 

void Pokemon::Spr::setSprites(Sprite &party, Sprite &front, Sprite &back){

  pkmSprites[PARTY] = &party;
  pkmSprites[FRONT] = &front;
  pkmSprites[BACK] = &back;

}//setSprites

Sprite Pokemon::Spr::getSprite(int spr){

  return *pkmSprites[spr];

}//getSprite



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
