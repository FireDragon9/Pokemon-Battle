#include "iniPokemon.h"
#include "Pokemon.h"
#include "pathPkmTxt.h"

CharizardTxt charizardTxt;
BlastoiseTxt blastoiseTxt;

Pokemon Charizard("CHARIZARD", 36, MALE, 1200, 100, 100, 130, 120, 95, FIRE,
                  FLYING, charizardTxt.party, charizardTxt.front,
                  charizardTxt.back);

Pokemon Blastoise("BLASTOISE", 36, FEMALE, 1500, 100, 120, 110, 130, 80, WATER,
                  null, blastoiseTxt.party, blastoiseTxt.front,
                  blastoiseTxt.back);
