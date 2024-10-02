#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "../../Pokemon.h"
#include "../../SFML/include/Graphics.hpp"
#include <iostream>

class Charizard : public Pokemon {

private:
  std::string pkmName = "Charizard";

  static sf::Texture pkmTxt[3];

  ///////////////

public:
  static bool loadTxt;

  static sf::Sprite pkmSprites[3];

  // Constructor
  Charizard();

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

}; // Charizard

#endif // !CHARIZARD_H
#define CHARIZARD_H

#include "../../Pokemon.h"
