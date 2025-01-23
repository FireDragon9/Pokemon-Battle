#pragma ONCE
#ifndef POKEMON_H
#define POKEMON_H

#include <SFML/Graphics/Sprite.hpp>
#include <unordered_map>
#include "SFML/include/Graphics.hpp"
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

enum Gender {

  NONE,
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

//GENDERS ARE YET TO BE USED !!!!!!!!!!!!!!!!1

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

  // constructor
  Pokemon();

  virtual ~Pokemon() {}

  ///////////////////////////////////
  ////////////////////////////////// INFORMATION
  ///////////////////////////////////

  // setters
  void setName(std::string name);

  void setFirstType(int &type);

  void setSecondType(int &type);

  // getters
  std::string getName();

  
  int getFirstType() const;

  ////////////////////////
  ////////////////////////
  //////////////////////// SPRITE
  ////////////////////////
  ///////////////////////

  class Spr{


    private:
      // sprites

      /* due the use of pointers instead of having their own sprites,
       * it would cause to position every Pokemon's sprite regadless whether
       * it's yours or not.
       * in single battles, it's not a problem.
       * however, in double battle it would require to recode it
      */

      std::unordered_map<int, sf::Sprite*> pkmSprites;

    public:

      // GETTERS

      sf::Sprite getSprite(int spr);

      // SETTING
      
      void setSprPos(const int &spr, const int &x, const int &y);

  
      void setSprites(sf::Sprite &party, sf::Sprite &front, sf::Sprite &back);


  }Spr;

  ///////////////////////////
  /////////////////////////// LEVEL
  ///////////////////////////

  void setLevel(int &lvl);

  int getLevel() const;

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

  int getSecondType() const;

  /////////////////////////////////////////////////////////
};

#endif // POKEMON_H
