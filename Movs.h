
#ifndef MOVS_H
#define MOVS_H

#include "Pokemon.h"
#include <string>

enum statUsed {

  Attack,
  SpecialAttack

};

class Movs {

private:
  int movType;
  int movDamage;
  int movStat;
  int movPP;

  std::string movName;

public:
  // constructor
  Movs(std::string name, int type, int dmg, int PP, int MovStat);

  Movs() {}

  // SETTERS
  void setMovType(int &type);
  void setMovDmg(int &dmg);
  void setMovPP(int &PP);
  void setMovStat(int &stat);
  void setMovName(std::string &name);

  // GETTERS
  int getMovType();
  int getMovDmg();
  int getMovPP();
  int getMovStat();
  std::string getMovName();

  void Damaging(Pokemon pkm, int statUsed, Pokemon targetPkm);

}; // class Movs

#endif // Mov
