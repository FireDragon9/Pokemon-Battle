#include "Pokemon.h"
#include "SFML/include/Graphics.hpp"
#include "iniPokemon.cpp"
#include <algorithm>
#include <iostream>
using namespace sf;

int main(int argc, char *argv[]) {

  const int HORIZONTAL_WINDOW = 720;
  const int VERTICAL_WINDOW = 640;

  VideoMode vm(HORIZONTAL_WINDOW, VERTICAL_WINDOW);

  RenderWindow window(vm, "Battle", Style::Default);

  while (window.isOpen()) {

    if (Keyboard::isKeyPressed(Keyboard::Escape)) {

      window.close();

    } // exit

    // cleaning
    window.clear();

    // displaying
    window.display();
  } // while window is open

  return 0;
} // main
