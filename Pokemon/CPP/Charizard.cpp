#include "../Headers/Charizard.h"
#include "../LoadTextures/LoadCharizard.cpp"
#include <iostream>
#include <ostream>
using namespace std;
using namespace sf;

Charizard::Charizard(string name) {

  loadTexture();

  setName(name);

  pkmSprites[PARTY] = &charizardSpr[PARTY];
  pkmSprites[FRONT] = &charizardSpr[FRONT];
  pkmSprites[BACK] = &charizardSpr[BACK];
}
