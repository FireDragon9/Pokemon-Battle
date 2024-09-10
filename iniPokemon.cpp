#include "iniPokemon.h"
#include "Pokemon.h"
#include "pathPkmTxt.h"

CharizardTxt charizardTxt;

Pokemon Charizard("Charizard", 36, 900, 80, 80, 120, 100, 70, FIRE, FLYING,
                  charizardTxt.party, charizardTxt.front, charizardTxt.back);
