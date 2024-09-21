#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <array>
#include <iostream>
#include <ostream>
#include <string>

using namespace sf;
using namespace std;

Pokemon::Pokemon() {}

Pokemon::Pokemon(string name, int lvl, int gender, double hp, int atk, int def,
                 int spAtk, int spDef, int spd, int firstType, int secondType,
                 string partyTxt, string frontTxt, string backTxt) {
  // setting the information
  setName(name);
  setLevel(lvl);
  setGender(gender);
  //  setting types
  setFirstType(firstType);
  setSecondType(secondType);

  // setting texture and sprite
  // textures
  setPartyTxt(partyTxt);
  setFrontTxt(frontTxt);
  setBackTxt(backTxt);

  // sprites
  setPartySpr(pkmPartyTexture);
  setFrontSpr(pkmFrontTexture);
  setBackSpr(pkmBackTexture);

  // setting the stats
  Stats.setHP(hp);
  Stats.setAttack(atk);
  Stats.setDef(def);
  Stats.setSpAttack(spAtk);
  Stats.setSpDef(spDef);
  Stats.setSpd(spd);
};

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

void Pokemon::setGender(int &gender) {

  this->pkmGender = gender;

  if (this->pkmGender == MALE) {

    this->pkmGenderTxt.loadFromFile("Sprites/Information/Male.png");

  } else if (this->pkmGender == FEMALE) {

    this->pkmGenderTxt.loadFromFile("Sprites/Information/Female.png");

  } // else if female

  this->pkmGenderSpr.setTexture(this->pkmGenderTxt);

} // setGender

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

// TEXTURE GETTERS
//

Texture Pokemon::getPartyTxt() { return this->pkmPartyTexture; }
Texture Pokemon::getFrontTxt() { return this->pkmFrontTexture; }
Texture Pokemon::getBackTxt() { return this->pkmBackTexture; }

// SPRITE GETTERS
Sprite &Pokemon::getPartySpr() { return this->pkmPartySprite; }
Sprite &Pokemon::getFrontSpr() { return this->pkmFrontSprite; }
Sprite &Pokemon::getBackSpr() { return this->pkmBackSprite; }

// TEXTURE SETTERS
void Pokemon::setPartyTxt(string path) {
  pkmPartyTexture.loadFromFile(path);
} // partytxt

void Pokemon::setFrontTxt(string path) {
  pkmFrontTexture.loadFromFile(path);
} // frontxt

void Pokemon::setBackTxt(string path) {
  pkmBackTexture.loadFromFile(path);

} // backtxt

// SPRITE SETTERS

void Pokemon::setPartySpr(Texture &txt) {
  pkmPartySprite.setTexture(txt);

} // party spr

void Pokemon::setFrontSpr(Texture &txt) {
  pkmFrontSprite.setTexture(txt);
} // front spr

void Pokemon::setBackSpr(Texture &txt) {
  pkmBackSprite.setTexture(txt);
} // back spr

// Setting gender sprite pos

void Pokemon::setGenderPos(int &x, int &y) {

  FloatRect pPkmGenderRec;
  pPkmGenderRec = this->pkmGenderSpr.getLocalBounds();

  this->pkmGenderSpr.setOrigin(pPkmGenderRec.left - pPkmGenderRec.width / 2,
                               pPkmGenderRec.top - pPkmGenderRec.height / 2);

  this->pkmGenderSpr.setPosition(x, y);
}

/// setting sprite pos

void Pokemon::setSprPos(int &x, int &y, Sprite &spr) {

  FloatRect sprRect;
  sprRect = spr.getLocalBounds();

  spr.setOrigin(sprRect.left + sprRect.width / 2,
                sprRect.top + sprRect.height / 2);

  spr.setPosition(x, y);

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
std::string Pokemon::getName() { return pkmName; }

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
