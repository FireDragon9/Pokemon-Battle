#pragma ONCE
#ifndef CHARIZARD_H
#define CHARIZARD_H

#include <SFML/Graphics/Sprite.hpp>
#include <string>

#include "../../Pokemon.h"
#include "../../SFML/include/Graphics.hpp"

class Charizard : public Pokemon {

private:
  ///////////////

public:
  Charizard(std::string name, int gender);

  void loadCharizardTxt();

  // Charizard Stats
  class Stats {

  private:
    double HP = 1400;
    int Attack = 100;
    int Defense = 100;
    int spAttack = 130;
    int spDefense = 120;
    int Speed = 95;

  } Stats;

  /*
  class Spr{


    private:
      // sprites
      sf::Sprite *pkmSprites[3];
      sf::Sprite *pkmGenderSpr;

    public:

      // GETTERS
      sf::Sprite getGenderSpr() const;

      sf::Sprite getPartySpr() const;
      sf::Sprite getFrontSpr() const;
      sf::Sprite getBackSpr() const;

      // SETTING
      void setPartySprPos(unsigned int x, unsigned int y);
      void setFrontSprPos(unsigned int x, unsigned int y);
      void setBackSprPos(unsigned int x, unsigned int y);
  
      void setSprites(sf::Sprite &party, sf::Sprite &front, sf::Sprite &back);

      void setGenderPos(unsigned int x, unsigned int y);

      void setGenderSpr(sf::Sprite &gender); 

  }Spr;
  */
}; // Charizard

#endif // !CHARIZARD_H
#define CHARIZARD_H

#include "../../Pokemon.h"
