#include "../Headers/Charizard.h"
#include "../../SFML/include/Graphics.hpp"
#include <filesystem>
#include <iostream>
using namespace std;

sf::Texture Charizard::pkmTxt[3];
sf::Sprite Charizard::pkmSprites[3];

bool Charizard::loadTxt = false;

Charizard::Charizard() {

  if (!loadTxt) {

    pkmTxt[PARTY].loadFromFile("Sprites/Pokemon/Party/Charizard.png");
    pkmTxt[FRONT].loadFromFile("Sprites/Pokemon/Front/Charizard.png");
    pkmTxt[BACK].loadFromFile("Sprites/Pokemon/Back/Charizard.png");

    pkmSprites[PARTY].setTexture(pkmTxt[PARTY]);
    pkmSprites[FRONT].setTexture(pkmTxt[FRONT]);
    pkmSprites[BACK].setTexture(pkmTxt[BACK]);

    loadTxt = true;
  }
}
