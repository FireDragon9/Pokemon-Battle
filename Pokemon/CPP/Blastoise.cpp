#include <ostream>

#include "../Headers/Blastoise.h"
#include "../LoadTextures/LoadBlastoise.cpp"

using namespace std;
using namespace sf;

Blastoise::Blastoise(string name, int gender) {

  setName(name);

  Spr.setSprites(blastoiseSpr[PARTY], blastoiseSpr[FRONT], blastoiseSpr[BACK]); 
  

}

