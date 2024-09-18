#include "BattleSystem.h"
#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "SFML/include/System.hpp"
#include <iostream>

using namespace sf;
using namespace std;

// using pass by value because in battle the stats can decrease or increase
// but it doesnt affect outside battle
void battle(Pokemon playerPkm, Pokemon enemyPkm, RenderWindow &window,
            Font &gameF) {

  drawUI(playerPkm, enemyPkm, window, gameF);

  drawPkm(playerPkm, enemyPkm, window);

  while (playerPkm.Stats.getHP() > 0 && enemyPkm.Stats.getHP() > 0) {

    break;
  } // while

} // void battle()

////////////////THE AREA IS COMPLETELY FOR DEBUG PURPOSE

// drawing Pokemon's sprites and names
void drawPkm(Pokemon &playerPkm, Pokemon &enemyPkm, RenderWindow &window) {

  ///////
  /////// PLAYER'S POKEMON
  ///////

  int PLAYER_POKEMON_X = 190;
  int PLAYER_POKEMON_Y = 252;

  RectangleShape areaPlayerPkm(Vector2f(100, 16));
  areaPlayerPkm.setFillColor(Color::Red);

  areaPlayerPkm.setOrigin(50, 8);

  areaPlayerPkm.setPosition(PLAYER_POKEMON_X, PLAYER_POKEMON_Y);

  playerPkm.setSprPos(PLAYER_POKEMON_X, PLAYER_POKEMON_Y, "BACK");

  ///////
  /////// ENEMY POKEMON
  ///////

  int ENEMY_POKEMON_X = 525;
  int ENEMY_POKEMON_Y = 105;

  RectangleShape areaEnemyPokemon(Vector2f(100, 16));
  areaEnemyPokemon.setFillColor(Color::Blue);

  areaEnemyPokemon.setOrigin(50, 8);

  areaEnemyPokemon.setPosition(ENEMY_POKEMON_X, ENEMY_POKEMON_Y);

  enemyPkm.setSprPos(ENEMY_POKEMON_X, ENEMY_POKEMON_Y, "FRONT");

  //////
  ////// DRAWING
  //////

  window.draw(areaPlayerPkm);
  window.draw(areaEnemyPokemon);

  window.draw(playerPkm.getBackSpr());
  window.draw(enemyPkm.getFrontSpr());

} // void drawPkm()

//////////////////////////////////////////////////////

void drawUI(Pokemon &trainerPkm, Pokemon &enemyPkm, RenderWindow &window,
            Font &gameF) {

  // player Pokemon UI

  // PKMNAME

  Text playerPkmName;
  playerPkmName.setFont(gameF);

  playerPkmName.setString(trainerPkm.getName());

  FloatRect pPkmNameRec;

  pPkmNameRec = playerPkmName.getLocalBounds();

  playerPkmName.setOrigin(pPkmNameRec.left - pPkmNameRec.width / 2,
                          pPkmNameRec.top - pPkmNameRec.height / 2);

  playerPkmName.setCharacterSize(37);

  playerPkmName.setFillColor(Color::Black);

  playerPkmName.setPosition(360, 228);

  // PKM LEVEL

  Text playerPkmLvl;
  playerPkmLvl.setFont(gameF);

  playerPkmLvl.setString(to_string(trainerPkm.getLevel()));

  FloatRect pPkmLvlRec;

  pPkmLvlRec = playerPkmName.getLocalBounds();

  playerPkmLvl.setOrigin(pPkmLvlRec.left - pPkmLvlRec.width / 2,
                         pPkmLvlRec.top - pPkmLvlRec.height / 2);

  playerPkmLvl.setCharacterSize(35);

  playerPkmLvl.setFillColor(Color::Black);

  playerPkmLvl.setPosition(568, 232);

  ///////////////////////////////////

  /// TEXTURE AND SPRITE

  Texture playerPkmUItxt;
  playerPkmUItxt.loadFromFile("Sprites/Battle/UI/playerPkm.png");

  Sprite playerPkmUIspr;
  playerPkmUIspr.setTexture(playerPkmUItxt);

  // setting setting player Pokemon UI origin

  FloatRect playerPkmUIrect = playerPkmUIspr.getLocalBounds();

  playerPkmUIspr.setOrigin(playerPkmUIrect.left - playerPkmUIrect.width / 2,
                           playerPkmUIrect.top - playerPkmUIrect.height / 2);

  playerPkmUIspr.setPosition(200, 167);

  ///////////////////// DRAW

  window.draw(playerPkmUIspr);

  window.draw(playerPkmName);

  window.draw(playerPkmLvl);

} // drawUI();
