#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Pokemon.h"
#include "Pokemon/Headers/Charizard.h"
#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window);

void drawUI(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF);

#endif // !BATTLESYSTEM_H
#define BATTLESYSTEM_H
