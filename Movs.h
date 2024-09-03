
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

  std::string movName;

public:
  // constructor
  Movs(std::string name, int type, int dmg);

  Movs() {}

  // SETTERS
  void setMovType(int type);
  void setMovDmg(int dmg);
  void setMovName(std::string name);

  // GETTERS
  int getMovType();
  int getMovDmg();
  std::string getMovName();

  void Damaging(Pokemon pkm, int statUsed, Pokemon targetPkm);

}; // class Movs

#endif // Mov
