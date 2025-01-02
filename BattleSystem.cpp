#include "BattleSystem.h"
#include "LoadTextures/BattleUI.cpp"
#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "SFML/include/System.hpp"
#include <iostream>

using namespace sf;
using namespace std;

// texts
sf::Text playerPkmName;
sf::Text enemyPkmName;

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF) {

  loadBattleTexture();

  drawUI(playerPkm, enemyPkm, window, gameF);

  drawPkm(playerPkm, enemyPkm, window, gameF);

} // battle

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
             sf::Font &gameF) {

  playerPkm.setBackSprPos(150, 250);
  window.draw(playerPkm.getBackSpr());

  enemyPkm.setFrontSprPos(530, 100);
  window.draw(enemyPkm.getFrontSpr());

} // draw pkmSprites

void drawUI(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF) {

  static bool newName = true;

  // names

  if (newName) {
    playerPkmName.setString(playerPkm.getName());
    enemyPkmName.setString(enemyPkm.getName());

    playerPkmName.setFont(gameF);
    enemyPkmName.setFont(gameF);

    playerPkmName.setCharacterSize(29);
    enemyPkmName.setCharacterSize(29);

    playerPkmName.setFillColor(Color::Black);
    enemyPkmName.setFillColor(Color::Black);

    playerPkmName.setOrigin(playerPkmName.getGlobalBounds().left +
                                playerPkmName.getGlobalBounds().width / 2.0f,
                            playerPkmName.getGlobalBounds().top +
                                playerPkmName.getGlobalBounds().height / 2.0f);

    enemyPkmName.setOrigin(enemyPkmName.getGlobalBounds().left +
                               enemyPkmName.getGlobalBounds().width / 2.0f,
                           enemyPkmName.getGlobalBounds().top +
                               enemyPkmName.getGlobalBounds().height / 2.0f);

    playerPkmName.setPosition(515, 250);
    enemyPkmName.setPosition(115, 51);

    newName = false;

  } // if newName

  // setting positions
  playerHpInterfaceSpr.setPosition(540, 280);
  enemyHpInterfaceSpr.setPosition(160, 70);

  // drawing
  window.draw(backgroundSpr);

  window.draw(playerHpInterfaceSpr);
  window.draw(enemyHpInterfaceSpr);

  window.draw(playerPkmName);
  window.draw(enemyPkmName);

} // drawUI
