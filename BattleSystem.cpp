#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "BattleSystem.h"
#include "LoadTextures/BattleUI.cpp"
#include "Pokemon.h"

using namespace sf;
using namespace std;

// texts
Text playerPkmName;
Text enemyPkmName;

void iniUiTxt() { loadBattleTexture(); }

void battle(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
            sf::Font &gameF) {


  drawUI(playerPkm, enemyPkm, window, gameF);

  drawPkm(playerPkm, enemyPkm, window, gameF);

} // battle

void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, sf::RenderWindow &window,
             sf::Font &gameF) {

  playerPkm.Spr.setSprPos(BACK, playerPkm_x, playerPkm_y);


  window.draw(playerPkm.Spr.getSprite(BACK));    

  enemyPkm.Spr.setSprPos(FRONT, enemyPkm_x, enemyPkm_y);

  window.draw(enemyPkm.Spr.getSprite(FRONT));


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

    playerPkmName.setPosition(playerPkmName_x, playerPkmName_y);
    enemyPkmName.setPosition(enemyPkmName_x, enemyPkmName_y);

    // gender position
   // playerPkm.Spr.setGenderPos(playerPkmGender_x, playerPkmGender_y);
   // enemyPkm.Spr.setGenderPos(enemyPkmGender_x, enemyPkmGender_y);

    newName = false;

  } // if newName

  // setting positions
  playerHpInterfaceSpr.setPosition(playerHpInterface_x, playerHpInterface_y);
  enemyHpInterfaceSpr.setPosition(enemyHpInterface_x, enemyHpInterface_y);

  // drawing
  window.draw(backgroundSpr);

  window.draw(playerHpInterfaceSpr);
  window.draw(enemyHpInterfaceSpr);

  window.draw(playerPkmName);
  window.draw(enemyPkmName);


} // drawUI
