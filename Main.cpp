#include "SFML/include/Graphics.hpp"
#include <iostream>
#include <ostream>

#include "Include/IncludeAll.cpp"
#include "Include/IncludePokemon.cpp"

using namespace sf;
using namespace std;

int main(int argc, char *argv[]) {

  iniUiTxt();

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
  Charizard charizard1("CHARIZARD", MALE);
  Charizard charizard2("CHARIZARD", MALE);

  while (window.isOpen()) {
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
      window.close();

    } // exit

    // cleaning
    window.clear();

    battle(charizard1, charizard2, window, gameFont);

    // window.draw(backgroundSpr);

    //  displaying
    window.display();
  } // while window is open

  return 0;
} // main
