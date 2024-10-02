#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>
#include <ostream>

#include "BattleSystem.h"
#include "Pokemon/Headers/Charizard.h"

using namespace sf;
using namespace std;

int main(int argc, char *argv[]) {

  Font gameFont;

  gameFont.loadFromFile("Fonts/GameFont.ttf");

  const int HORIZONTAL_WINDOW = 720;
  const int VERTICAL_WINDOW = 480;

  VideoMode vm(HORIZONTAL_WINDOW, VERTICAL_WINDOW);

  RenderWindow window(vm, "Battle", Style::Default);

  class Charizard charizard1;
  class Charizard charizard2;

  cout << "Charizard 1: " << &charizard1.pkmSprites[FRONT] << endl;
  cout << "Charizard 2: " << &charizard2.pkmSprites[FRONT] << endl;
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

    // battle(Chari, Chari, window, gameFont);

    //  displaying
    window.display();
  } // while window is open

  return 0;
} // main
