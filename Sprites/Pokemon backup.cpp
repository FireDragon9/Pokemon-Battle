#include "Movs.h"
#include "Natures.h"
#include "SFML/include/Graphics.hpp"
#include <iostream>

using namespace sf;
using namespace std;

enum Types {
  null,
  NORMAL,
  FIRE,
  WATER,
  ELETRIC,
  GRASS,
  ICE,
  FIGHTING,
  POISON,
  GROUND,
  FLYING,
  PSYCHIC,
  BUG,
  ROCK,
  GHOST,
  DRAGON,
  DARK,
  STEEL,
  FAIRY

}; // types num

class Pokemon {

private:
  // Name and Description
  string name;
  string Description;

  // Sprites and Textures
  Sprite backSprite;
  Sprite frontSprite;
  Sprite partySprite;

  Texture backTexture;
  Texture frontTexture;
  Texture partyTexture;

  // Types and Stats
  int myType[2];
  int HP, Attack, Defense, SpecialAttack, SpecialDefense, Speed;
  int level;
  // THIS LINE HERE WILL BE NATURE

  // MOVS

  //////////////////////////////

public:
  // Constructor
  // when Type2 has null value, not confuse to NULL, it's the same as having no
  // type.
  /*
  Pokemon(string Name, int Type, int Type2, int Lvl, int baseHP, int baseAtk,
          int baseDef, int baseSpAtk, int baseSpDef, int spd, string frontTxt,
          string backTxt, string partyTxt) {

    // Information
    setName(Name);
    myType[0] = Type;
    myType[1] = Type2;
    level = Lvl;

    // Stats
    HP = baseHP;
    Attack = baseAtk;
    Defense = baseDef;
    SpecialAttack = baseSpAtk;
    SpecialDefense = baseSpDef;
    Speed = spd;

    // Texture
    frontTexture.loadFromFile(frontTxt);
    backTexture.loadFromFile(backTxt);
    partyTexture.loadFromFile(partyTxt);

    // Sprite
    frontSprite.setTexture(frontTexture);
    backSprite.setTexture(backTexture);
    partySprite.setTexture(partyTexture);

  } // Constructor
  */
  /// GETTERS AND SETTERS

  void setName(string pkmName) { name = pkmName; } // setName

  string getName() { return name; } // getName

  // sprite
  Sprite getSprite(String spr) {

    if (spr == "Front") {
      return frontSprite;
    }
    if (spr == "Back") {
      return backSprite;
    }
    if (spr == "Party") {
      return partySprite;
    }

    return frontSprite;
  } // getSprite

}; // Class Pokemon
