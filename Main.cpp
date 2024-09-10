#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "iniPokemon.h"
#include <iostream>
using namespace sf;

int main(int argc, char *argv[]) {

  const int HORIZONTAL_WINDOW = 720;
  const int VERTICAL_WINDOW = 480;

  VideoMode vm(HORIZONTAL_WINDOW, VERTICAL_WINDOW);

  RenderWindow window(vm, "Battle", Style::Default);

  //////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////// BACKGROUND BATTTTLE
  /////////////////////////////////////////////////////////ITS A TEST

  Texture background;
  background.loadFromFile("Sprites/Background/Background.png");

  Sprite backgroundSpr;

  backgroundSpr.setTexture(background);

  backgroundSpr.setPosition(0, 0);

  // SQUARES
  // 190
  // 305

  int PLAYER_POKEMON_X = 190;
  int PLAYER_POKEMON_Y = 305;

  RectangleShape trainerPokemon(Vector2f(100, 16));
  trainerPokemon.setFillColor(Color::Red);

  trainerPokemon.setOrigin(50, 8);
  trainerPokemon.setPosition(PLAYER_POKEMON_X, PLAYER_POKEMON_Y);

  // Charizard.Draw.getBackSpr().setPosition(PLAYER_POKEMON_X,
  // PLAYER_POKEMON_Y);

  ///////////////////////////////

  while (window.isOpen()) {
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {

      window.close();

    } // exit

    // cleaning
    window.clear();

    window.draw(backgroundSpr);
    window.draw(trainerPokemon);

    //  displaying
    window.display();
  } // while window is open

  return 0;
} // main
