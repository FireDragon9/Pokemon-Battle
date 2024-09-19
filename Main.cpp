#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "iniPokemon.h"
#include <SFML/Graphics/Font.hpp>
#include <iostream>

#include "BattleSystem.h"

using namespace sf;

int main(int argc, char *argv[]) {

  Font gameFont;

  gameFont.loadFromFile("Fonts/GameFont.ttf");

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

  ///////////////////
  ///////////////////////////////

  while (window.isOpen()) {
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {

      window.close();

    } // exit

    // cleaning
    window.clear();

    window.draw(backgroundSpr);

    battle(Charizard, Blastoise, window, gameFont);

    // window.draw(trainerPokemon);

    //  displaying
    window.display();
  } // while window is open

  return 0;
} // main
