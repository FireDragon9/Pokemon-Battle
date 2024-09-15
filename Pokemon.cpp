#include "Pokemon.h"
#include "Movs.h"
#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <array>
#include <iostream>
#include <ostream>
#include <string>

using namespace sf;
using namespace std;

Pokemon::Pokemon() {}

Pokemon::Pokemon(string name, double hp, int atk, int def, int spAtk, int spDef,
                 int spd, int firstType, int secondType, string partyTxt,
                 string frontTxt, string backTxt) {
  // setting the information
  setName(name);
  // setLevel(lvl);
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
void Pokemon::setName(string &name) { pkmName = name; }

// void Pokemon::setLevel(int &lvl) { *level = lvl; }

void Pokemon::setFirstType(int &type) { pkmType[0] = type; }

void Pokemon::setSecondType(int &type) { pkmType[1] = type; }

/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////// DRAW
//////////////////////////////////////////////////////////////

// TEXTURE GETTERS
//

Texture Pokemon::getPartyTxt() { return pkmPartyTexture; }
Texture Pokemon::getFrontTxt() { return pkmFrontTexture; }
Texture Pokemon::getBackTxt() { return pkmBackTexture; }

// SPRITE GETTERS
Sprite Pokemon::getPartySpr() { return pkmPartySprite; }
Sprite Pokemon::getFrontSpr() { return pkmFrontSprite; }
Sprite Pokemon::getBackSpr() { return pkmBackSprite; }

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

/// setting sprite pos

void Pokemon::setSprPos(int &x, int &y, string spr) {

  FloatRect sprRect;

  if (spr == "FRONT") { // front

    sprRect = pkmFrontSprite.getLocalBounds();

    pkmFrontSprite.setOrigin(sprRect.left + sprRect.width / 2,
                             sprRect.top + sprRect.height / 2);

    pkmFrontSprite.setPosition(x, y);

  } else if (spr == "BACK") { // back

    sprRect = pkmBackSprite.getLocalBounds();

    pkmBackSprite.setOrigin(sprRect.left + sprRect.width / 2,
                            sprRect.top + sprRect.height / 2);

    pkmBackSprite.setPosition(x, y);

  } else if (spr == "PARTY") { // party

    sprRect = pkmPartySprite.getLocalBounds();

    pkmPartySprite.setOrigin(sprRect.left + sprRect.width / 2,
                             sprRect.top + sprRect.height / 2);

    pkmPartySprite.setPosition(x, y);

  } else {

    pkmFrontSprite.setPosition(0, 0);

  } // else

} // setSprPos

/*
bool Pokemon::Draw::returnSprite() {
  return pkmFrontTexture.loadFromFile("Sprites/Pokémon/Back/Charizard.png");
}
*/
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

// int Pokemon::getLevel() { return *level; }

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
