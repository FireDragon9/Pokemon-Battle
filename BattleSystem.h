#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
             sf::Font &gameF);

void drawUI(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

#endif // !BATTLESYSTEM_H
#define BATTLESYSTEM_H
