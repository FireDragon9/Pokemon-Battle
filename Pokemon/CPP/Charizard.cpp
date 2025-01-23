#include <iostream>
#include <ostream>

#include "../../LoadTextures/Gender.cpp"
#include "../Headers/Charizard.h"
#include "../LoadTextures/LoadCharizard.cpp"

using namespace std;
using namespace sf;

Charizard::Charizard(string name, int gender) {
 
  loadGenderTexture();

  loadTexture();

  setName(name);

  Spr.setSprites(charizardSpr[PARTY], charizardSpr[FRONT], charizardSpr[BACK]); 
  

}

