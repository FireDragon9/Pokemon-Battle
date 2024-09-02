#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
private:
  std::string pkmName;
  int level;

  class Stats {

  private:
    int HP;
    int Attack;
    int Defense;
    int spAttack;
    int spDefense;
    int speed;

  public:
    // SETTERS

    void setHP(int hp);
    void setAttack(int attack);
    void setDef(int def);
    void setSpAttack(int spAttack);
    void setSpd(int Spd);

    int getHP();
    int getAttack();
    int getDef();
    int getSpAttack();
    int getSpd();

  } Stats; // Anonymous class for abilities

public:
  // constructor
  Pokemon(std::string name);

  void setName(std::string &name);

  void setLevel();

  std::string getName() const;
};

#endif // POKEMON_H
