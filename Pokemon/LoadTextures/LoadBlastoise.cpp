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

inline Texture blastoiseTxt[3];
inline Sprite blastoiseSpr[3];

static bool isBlastoiseLoaded = false;

inline void loadBlastoiseTexture() {

  if (!isBlastoiseLoaded) {

    // loading textures
    blastoiseTxt[0].loadFromFile("Sprites/Pokemon/Party/Blastoise.png");
    blastoiseTxt[1].loadFromFile("Sprites/Pokemon/Front/Blastoise.png");
    blastoiseTxt[2].loadFromFile("Sprites/Pokemon/Back/Blastoise.png");

    // setting textures to sprites
    blastoiseSpr[0].setTexture(blastoiseTxt[0]);
    blastoiseSpr[1].setTexture(blastoiseTxt[1]);
    blastoiseSpr[2].setTexture(blastoiseTxt[2]);

    // setting origin
    blastoiseSpr[0].setOrigin(blastoiseSpr[0].getGlobalBounds().left +
                                  blastoiseSpr[0].getGlobalBounds().width / 2,
                              blastoiseSpr[0].getGlobalBounds().top +
                                  blastoiseSpr[0].getGlobalBounds().height / 2);

    blastoiseSpr[1].setOrigin(blastoiseSpr[1].getGlobalBounds().left +
                                  blastoiseSpr[1].getGlobalBounds().width / 2,
                              blastoiseSpr[1].getGlobalBounds().top +
                                  blastoiseSpr[1].getGlobalBounds().height / 2);

    blastoiseSpr[2].setOrigin(blastoiseSpr[2].getGlobalBounds().left +
                                  blastoiseSpr[2].getGlobalBounds().width / 2,
                              blastoiseSpr[2].getGlobalBounds().top +
                                  blastoiseSpr[2].getGlobalBounds().height / 2);

    isBlastoiseLoaded = true;
  }
} // loadTexture()
