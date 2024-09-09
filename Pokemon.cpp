#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <array>
#include <iostream>
#include <ostream>

using namespace sf;
using namespace std;

Pokemon::Pokemon(string &name, int &lvl, double &hp, int &atk, int &def,
                 int &spAtk, int &spDef, int &spd, int &firstType,
                 int &secondType, string &partyTxt, string &frontTxt,
                 string &backTxt) {
  // setting the information
  setName(name);
  setLevel(lvl);
  // setting types
  setFirstType(firstType);
  setSecondType(secondType);

  // setting texture and sprite
  // textures
  Draw.setPartyTxt(partyTxt);
  Draw.setFrontTxt(frontTxt);
  Draw.setBackTxt(backTxt);

  // sprites
  Draw.setPartySpr(Draw.getPartyTxt());
  Draw.setFrontSpr(Draw.getFrontTxt());
  Draw.setBackSpr(Draw.getBackTxt());

  // setting the stats
  Stats.setHP(hp);
  Stats.setAttack(atk);
  Stats.setDef(def);
  Stats.setSpAttack(spAtk);
  Stats.setSpDef(spDef);
  Stats.setSpd(spd);

  std::array<Movs, 4> pkmMovs;
};

///////DESTRUCTOR
Pokemon::~Pokemon() {

  delete[] level;
  level = 0;

} // DESTRUCTOR

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////// BASIC INFORMATION
/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

// POKEMON INFORMATION
void Pokemon::setName(string &name) { pkmName = name; }

void Pokemon::setLevel(int &lvl) { *level = lvl; }

void Pokemon::setFirstType(int &type) { pkmType[0] = type; }

void Pokemon::setSecondType(int &type) { pkmType[1] = type; }

/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////// DRAW
//////////////////////////////////////////////////////////////

// TEXTURE GETTERS
Texture Pokemon::Draw::getPartyTxt() { return pkmPartyTexture; }
Texture Pokemon::Draw::getFrontTxt() { return pkmFrontTexture; }
Texture Pokemon::Draw::getBackTxt() { return pkmBackTexture; }

// SPRITE GETTERS
Sprite Pokemon::Draw::getPartySpr() { return pkmPartySprite; }
Sprite Pokemon::Draw::getFrontSpr() { return pkmFrontSprite; }
Sprite Pokemon::Draw::getBackSpr() { return pkmBackSprite; }

// TEXTURE SETTERS
void Pokemon::Draw::setPartyTxt(const string &path) {
  pkmPartyTexture.loadFromFile(path);
} // partytxt

void Pokemon::Draw::setFrontTxt(const string &path) {
  pkmFrontTexture.loadFromFile(path);
} // frontxt

void Pokemon::Draw::setBackTxt(const string &path) {
  pkmBackTexture.loadFromFile(path);
} // backtxt

// SPRITE SETTERS

void Pokemon::Draw::setPartySpr(const Texture &txt) {
  pkmPartySprite.setTexture(txt);
} // party spr

void Pokemon::Draw::setFrontSpr(const Texture &txt) {
  pkmFrontSprite.setTexture(txt);
} // front spr

void Pokemon::Draw::setBackSpr(const Texture &txt) {
  pkmBackSprite.setTexture(txt);
} // back spr

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

int Pokemon::getLevel() { return *level; }

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
