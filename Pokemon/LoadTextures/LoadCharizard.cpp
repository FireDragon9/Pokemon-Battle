#include <SFML/Graphics.hpp>
#include <iostream>
#include <ostream>
#pragma ONCE
using namespace sf;

/*
 *  0 -- Party texture/sprite
 *  1 -- Front texture/sprite
 *  3 -- Back texture/sprite
 *
 */

inline Texture charizardTxt[3];
inline Sprite charizardSpr[3];

static bool isCharizardLoaded = false;

inline void loadCharizardTexture() {

  if (!isCharizardLoaded) {

    // loading textures
    charizardTxt[0].loadFromFile("Sprites/Pokemon/Party/Charizard.png");
    charizardTxt[1].loadFromFile("Sprites/Pokemon/Front/Charizard.png");
    charizardTxt[2].loadFromFile("Sprites/Pokemon/Back/Charizard.png");

    // setting textures to sprites
    charizardSpr[0].setTexture(charizardTxt[0]);
    charizardSpr[1].setTexture(charizardTxt[1]);
    charizardSpr[2].setTexture(charizardTxt[2]);

    // setting origin
    charizardSpr[0].setOrigin(charizardSpr[0].getGlobalBounds().left +
                                  charizardSpr[0].getGlobalBounds().width / 2,
                              charizardSpr[0].getGlobalBounds().top +
                                  charizardSpr[0].getGlobalBounds().height / 2);

    charizardSpr[1].setOrigin(charizardSpr[1].getGlobalBounds().left +
                                  charizardSpr[1].getGlobalBounds().width / 2,
                              charizardSpr[1].getGlobalBounds().top +
                                  charizardSpr[1].getGlobalBounds().height / 2);

    charizardSpr[2].setOrigin(charizardSpr[2].getGlobalBounds().left +
                                  charizardSpr[2].getGlobalBounds().width / 2,
                              charizardSpr[2].getGlobalBounds().top +
                                  charizardSpr[2].getGlobalBounds().height / 2);

    isCharizardLoaded = true;
  }
} // loadTexture()
