#include <SFML/Graphics/Sprite.hpp>
#pragma ONCE
#ifndef POKEMON_H
#define POKEMON_H
#include <SFML/Graphics/Texture.hpp>

#include "SFML/include/Graphics.hpp"
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

enum Gender {

  MALE,
  FEMALE

};

enum sprites {

  PARTY,
  FRONT,
  BACK

};

//////////////////
/////////////////

class Pokemon {
private:
  // Pokemon name
  std::string pkmName;

  // Pokemon level

  int pkmLevel;

  // Pokemon Gender
  int pkmGender;

  // Pokemon type(s)
  int pkmType[2];

  //////////////////////////////////////////
  ////////////////////////////////////////// PUBLIC
  //////////////////////////////////////////

public:
  // sprites
  sf::Sprite *pkmSprites[3];

  ~Pokemon() {}

  // Sprites

  // GETTERS
  sf::Sprite getPartySpr();
  sf::Sprite getFrontSpr();
  sf::Sprite getBackSpr();

  // SETTING POS
  void setPartySprPos(unsigned int x, unsigned int y);
  void setFrontSprPos(unsigned int x, unsigned int y);
  void setBackSprPos(unsigned int x, unsigned int y);

  // constructor
  Pokemon();

  ///////////////////////////
  /////////////////////////// LEVEL
  ///////////////////////////

  void setLevel(int &lvl);

  int getLevel() const;

  ////////////////////////
  ////////////////////////
  //////////////////////// SPRITE
  ////////////////////////
  ///////////////////////
  // getters

  // SETTING SPRITE POSITION

  void setSprPos(int x, int y, int spr);

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
  void setName(std::string name);

  void setGender(int &gender);

  void setGenderPos(int &x, int &y);

  void setFirstType(int &type);

  void setSecondType(int &type);

  // getters
  virtual std::string getName();

  sf::Sprite getGender() const;

  int getFirstType() const;
  int getSecondType() const;

  /////////////////////////////////////////////////////////
};

#endif // POKEMON_H
