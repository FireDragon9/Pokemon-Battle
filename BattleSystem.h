#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "LoadTextures/Gender.cpp"

// UI 

// HP
const int playerHpInterface_x = 540;
const int playerHpInterface_y = 280;

const int enemyHpInterface_x = 160;
const int enemyHpInterface_y = 70;

// pokemon location

const int playerPkm_x = 150;
const int playerPkm_y = 250;

const int enemyPkm_x = 530;
const int enemyPkm_y = 100;

const int playerPkmName_x = 515;
const int playerPkmName_y = 250;

const int enemyPkmName_x = 115;
const int enemyPkmName_y = 51;

const int playerPkmGender_x = playerPkmName_x + 105;
const int playerPkmGender_y = playerPkmName_y;

const int enemyPkmGender_x = enemyPkmName_x + 105;
const int enemyPkmGender_y = enemyPkmName_y;

void iniUiTxt();

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
             sf::Font &gameF);

void drawUI(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

#endif // !BATTLESYSTEM_H
#define BATTLESYSTEM_H
