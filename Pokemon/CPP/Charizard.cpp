#include "../Headers/Charizard.h"
#include "../LoadTextures/LoadCharizard.cpp"

using namespace std;
using namespace sf;

Charizard::Charizard(string name, int gender) {
 
  setName(name);

  Spr.setSprites(charizardSpr[PARTY], charizardSpr[FRONT], charizardSpr[BACK]); 
  

}

