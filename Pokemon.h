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
  std::string pkmName;
  int level;

  int pkmType[2];

public:
  // constructor
  Pokemon(std::string name, int lvl, double hp, int atk, int def, int spAtk,
          int spDef, int spd);

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

  /////////////////////////
  ////////////////////////
  /////////////////////// CLASS DRAW
  ////////////////////////
  ///////////////////////

  class Draw {

  private:
    sf::Texture pkmPartyTexture;
    sf::Texture pkmFrontTexture;
    sf::Texture pkmBackTexture;

    sf::Sprite pkmPartySprite;
    sf::Sprite pkmFrontSprite;
    sf::Sprite pkmBackSprite;

  public:
    // getters
    sf::Texture getPartyTxt();
    sf::Texture getFrontTxt();
    sf::Texture getBackTexture();

    sf::Sprite getPartySpr();
    sf::Sprite getFrontSpr();
    sf::Sprite getBackSpr();

    // setters
    void setPartyTxt(std::string partyTxt);
    void setFrontTxt(std::string frontTxt);
    void setBackTxt(std::string backTxt);

    void setPartySpr(sf::Texture partyTxt);
    void setFrontSpr(sf::Texture frontTxt);
    void setBackSpr(sf::Texture backTxt);

  } Draw;

  //////////////////////
  /////////////////////
  ///////////////////// BATTLE
  ////////////////////
  ////////////////////

  // GETTING DAMAGED

  void HPdmg(double damage);

  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////

  // setters
  void setName(std::string &name);

  void setLevel(int &lvl);

  void setFirstType(int type);

  void setSecondType(int type);

  // getters
  std::string getName();

  int getLevel();

  int getFirstType() const;
  int getSecondType() const;
};

#endif // POKEMON_H
