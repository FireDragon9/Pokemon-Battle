#include "../SFML/include/Graphics.hpp"


//NOTHING USED YET - 23/01/2025

using namespace sf;

inline sf::Texture maleTxt;
inline sf::Texture femTxt;

inline sf::Sprite maleSpr;
inline sf::Sprite femSpr;

static bool isGenderLoaded = false;

inline void loadGenderTexture() {

  if (!isGenderLoaded) {

    maleTxt.loadFromFile("Sprites/Information/Male.png");
    femTxt.loadFromFile("Sprites/Information/Female.png");

    maleSpr.setTexture(maleTxt);
    femSpr.setTexture(femTxt);

    maleSpr.setOrigin(
        maleSpr.getGlobalBounds().left + maleSpr.getGlobalBounds().width / 2,
        maleSpr.getGlobalBounds().top + maleSpr.getGlobalBounds().height / 2);

    femSpr.setOrigin(
        femSpr.getGlobalBounds().left + femSpr.getGlobalBounds().width / 2,
        femSpr.getGlobalBounds().top + femSpr.getGlobalBounds().height / 2);

    isGenderLoaded = true;

  } // is loaded

} // loadGenderTxt
