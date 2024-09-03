#include "Pokemon.h"
#include <string>

Pokemon iniPokemon(std::string name, int lvl, int hp, int atk, int def,
                   int spAtk, int spDef, int spd) {

  return Pokemon(name, lvl, hp, atk, def, spAtk, spDef, spd);
}

Pokemon Charizard = iniPokemon("Charizard", 36, 900, 124, 100, 140, 102, 98);
