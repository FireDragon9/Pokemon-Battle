#include "iniPokemon.h"
#include "Pokemon.h"
#include "pathPkmTxt.h"

CharizardTxt charizardTxt;

Pokemon Charizard("Charizard", 900, 32, 21, 23, 43, 92, FIRE, FLYING,
                  charizardTxt.party, charizardTxt.front, charizardTxt.back);
