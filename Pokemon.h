#ifndef POKEMON_H
#define POKEMON_H

#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/String.hpp>
#include <string>

class Pokemon {
private:
  std::string pkmName;
  int level;

  ////////////////////////
  class Stats {

  private:
    int HP;
    int Attack;
    int Defense;
    int spAttack;
    int spDefense;
    int Speed;

  public:
    // SETTERS

    void setHP(int &hp);
    void setAttack(int &atk);
    void setDef(int &def);
    void setSpAttack(int &spAtk);
    void setSpDef(int &spDef);
    void setSpd(int &spd);

    // GETTERS
    int getHP();
    int getAttack();
    int getDef();
    int getSpAttack();
    int getSpDef();
    int getSpd();

  } Stats; // Anonymous class for abilities

  /////////////////////////
  class Draw {

  private:
    sf::Texture pkmPartyTexture;
    sf::Texture pkmFrontTexture;
    sf::Texture pkmBackTexture;

    sf::Sprite pkmPartySprite;
    sf::Sprite pkmFrontSprite;
    sf::Sprite pkmBackSprite;

  public:
    // getters
    sf::Texture getPartyTxt();
    sf::Texture getFrontTxt();
    sf::Texture getBackTexture();

    sf::Sprite getPartySpr();
    sf::Sprite getFrontSpr();
    sf::Sprite getBackSpr();

    // setters
    void setPartyTxt(std::string partyTxt);
    void setFrontTxt(std::string frontTxt);
    void setBackTxt(std::string backTxt);

    void setPartySpr(sf::Texture partyTxt);
    void setFrontSpr(sf::Texture frontTxt);
    void setBackSpr(sf::Texture backTxt);

  } Draw;

  /////////////////////////

public:
  // constructor
  Pokemon(std::string name, int lvl, int hp, int atk, int def, int spAtk,
          int spDef, int spd);

  // setters
  void setName(std::string &name);

  void setLevel(int &lvl);

  // getters
  std::string getName() const;
};

#endif // POKEMON_H
