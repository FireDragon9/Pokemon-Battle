#include "BattleSystem.h"
#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "SFML/include/System.hpp"
#include <iostream>

using namespace sf;
using namespace std;

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF) {

  playerPkm.setBackSprPos(150, 250);
  window.draw(playerPkm.getBackSpr());

  enemyPkm.setFrontSprPos(530, 100);
  window.draw(enemyPkm.getFrontSpr());

} // battle

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window) {
} // draw pkmSprites
