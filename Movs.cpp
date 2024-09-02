#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"

using namespace std;
using namespace sf;

class Movs {

private:
  string movName;
  int damage;
  Texture movTexture;
  int mType;
  Sprite movSprite;

public:
  // constructor
  ////DONT FORGET SPRITES AND Texture
  /*
  Movs(string name, int movDamage, int movType){

    setName(name);
    setDamage(movDamage);
    setType(movType);

  }//Constructor
  */

  ///////////

  // GETTER AND SETTERS
  void setDamage(int dmg) { damage = dmg; } // setDamage

  void setTexture(Texture txt) { movTexture = txt; } // setTexture

  void setName(String name) { movName = name; } // setName

  void setSpr(Sprite spr) { movSprite = spr; } // setSprite

  void setType(int movType) { mType = movType; } // setType

  /////GETTERS

  int getDamage() { return damage; } // getDamage

  Texture getTexture() { return movTexture; } // getTxt

  string getName() { return movName; } // getName

  Sprite getSpr() { return movSprite; } // getSpr

  int getType() { return mType; } // getType

}; /// mov
