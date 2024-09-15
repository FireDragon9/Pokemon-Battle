#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/RenderWindow.hpp>

void battle(Pokemon playerPkm, Pokemon enemyPkm, sf::RenderWindow &window);

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window);

#endif // !BATTLESYSTEM_H
#define BATTLESYSTEM_H
