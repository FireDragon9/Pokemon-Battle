#pragma once
#ifndef POKEMON_H
#define POKEMON_H

#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/String.hpp>
#include <string>

enum Types {
  null,
  FIRE,
  WATER,
  ELETRIC,
  GRASS,
  ICE,
  FIGHTING,
  POISON,
  GROUND,
  FLYING,
  PSYCHIC,
  BUG,
  ROCK,
  GHOST,
  DRAGON,
  DARK,
  STEEL,
  FAIRY

};

//////////////////
/////////////////

class Pokemon {
private:
  // Pokemon name
  std::string pkmName;

  // Pokemon level

  int pkmLevel;

  // Texture
  sf::Texture pkmPartyTexture;
  sf::Texture pkmFrontTexture;
  sf::Texture pkmBackTexture;

  // Party
  sf::Sprite pkmPartySprite;
  sf::Sprite pkmFrontSprite;
  sf::Sprite pkmBackSprite;

  // Pokemon type(s)
  int pkmType[2];

  //////////////////////////////////////////
  ////////////////////////////////////////// PUBLIC
  //////////////////////////////////////////

public:
  // constructor
  Pokemon(std::string name, int lvl, double hp, int atk, int def, int spAtk,
          int spDef, int spd, int firstType, int secondType,
          std::string partyTxt, std::string frontTxt, std::string backTxt);
  Pokemon();

  // Destructor
  ~Pokemon();

  ///////////////////////////
  /////////////////////////// LEVEL
  ///////////////////////////

  void setLevel(int &lvl);

  int getLevel() const;

  ////////////////////////
  ////////////////////////
  //////////////////////// SPRITE AND TEXTURE
  ////////////////////////
  ///////////////////////
  // getters

  sf::Texture getPartyTxt();
  sf::Texture getFrontTxt();
  sf::Texture getBackTxt();

  sf::Sprite getPartySpr();
  sf::Sprite getFrontSpr();
  sf::Sprite getBackSpr();

  // setters
  void setPartyTxt(std::string path);
  void setFrontTxt(std::string path);
  void setBackTxt(std::string path);

  void setPartySpr(sf::Texture &txt);
  void setFrontSpr(sf::Texture &txt);
  void setBackSpr(sf::Texture &txt);

  // SETTING SPRITE POSITION

  void setSprPos(int &x, int &y, std::string spr);

  ////////////////////////
  ////////////////////////
  //////////////////////// CLASS STATS
  ////////////////////////
  ////////////////////////

  class Stats {

  private:
    double HP;
    int Attack;
    int Defense;
    int spAttack;
    int spDefense;
    int Speed;

  public:
    // SETTERS

    void setHP(double hp);
    void setAttack(int &atk);
    void setDef(int &def);
    void setSpAttack(int &spAtk);
    void setSpDef(int &spDef);
    void setSpd(int &spd);

    // GETTERS
    double getHP();
    int getAttack();
    int getDef();
    int getSpAttack();
    int getSpDef();
    int getSpd();

  } Stats; // Anonymous class for abilities

  //////////////////////
  /////////////////////
  ///////////////////// BATTLE
  ////////////////////
  ////////////////////

  // GETTING DAMAGED

  void HPdmg(double &damage);

  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////

  // setters
  void setName(std::string &name);

  // void setLevel(int &lvl);

  void setFirstType(int &type);

  void setSecondType(int &type);

  // getters
  std::string getName();

  // int getLevel();

  int getFirstType() const;
  int getSecondType() const;

  /////////////////////////////////////////////////////////
};

#endif // POKEMON_H
