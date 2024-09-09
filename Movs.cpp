#include "Movs.h"
#include "Pokemon.h"
#include <string>

/*
Movs::Movs(std::string name, int type, int dmg, int PP, int MovStat) {

  setMovType(type);

  setMovDmg(dmg);

  setMovName(name);
};

///////////////////////
/////////////////////// DAMAGING
//////////////////////
void Movs::Damaging(Pokemon pkm, int statUsed, Pokemon targetPokemon) {

  int pkmStatRequired;
  int targetDefStat;
  float STAB = 1;

  /////////////////////////////////////////////
  /////////////////////////////////////////////
  ////////////////////////////////////////////
  ///!!!!! DONT FORGET TO DO THE EFFECTIVENESS
  ////////////////////////////////////////////

  double attacking = (((((2 * pkm.getLevel()) / 5 + 2) * pkmStatRequired *
                        (pkmStatRequired / targetDefStat)) /
                       50) +
                      2) *
                     STAB;

  targetPokemon.HPdmg(attacking);
} // Damaging

// SETTERS
void Movs::setMovType(int &type) { movType = type; }
void Movs::setMovDmg(int &dmg) { movDamage = dmg; }
void Movs::setMovPP(int &PP) { movPP = PP; }
void Movs::setMovStat(int &stat) { movStat = stat; }
void Movs::setMovName(std::string &name) { movName = name; }

// GETTERS
int Movs::getMovType() { return movType; }
int Movs::getMovDmg() { return movDamage; }
std::string Movs::getMovName() { return movName; }
*/
