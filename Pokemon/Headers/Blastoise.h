#pragma ONCE
#ifndef BLASTOISE_H
#define BLASTOISE_H

#include <SFML/Graphics/Sprite.hpp>
#include <string>

#include "../../Pokemon.h"
#include "../../SFML/include/Graphics.hpp"

class Blastoise : public Pokemon {

private:
  ///////////////

public:
  Blastoise(std::string name, int gender);

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
#define BLASTOISE_H

#include "../../Pokemon.h"
