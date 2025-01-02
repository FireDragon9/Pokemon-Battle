#include "../SFML/Graphics.hpp"

using namespace sf;

// Textures
Texture backgroundTxt;
Texture playerHpInterfaceTxt;
Texture enemyHpInterfaceTxt;

// Sprites
Sprite backgroundSpr;
Sprite playerHpInterfaceSpr;
Sprite enemyHpInterfaceSpr;

static bool isLoaded = false;

void loadBattleTexture() {
  if (!isLoaded) {

    // Loading textures
    backgroundTxt.loadFromFile("Sprites/Background/Background.png");
    playerHpInterfaceTxt.loadFromFile("Sprites/Battle/UI/playerPkm.png");
    enemyHpInterfaceTxt.loadFromFile("Sprites/Battle/UI/enemyPkm.png");

    // Setting sprites
    backgroundSpr.setTexture(backgroundTxt);
    playerHpInterfaceSpr.setTexture(playerHpInterfaceTxt);
    enemyHpInterfaceSpr.setTexture(enemyHpInterfaceTxt);

    // adjusting origin
    playerHpInterfaceSpr.setOrigin(
        playerHpInterfaceSpr.getGlobalBounds().left +
            playerHpInterfaceSpr.getGlobalBounds().width / 2.0f,
        playerHpInterfaceSpr.getGlobalBounds().top +
            playerHpInterfaceSpr.getGlobalBounds().height / 2.0f);

    enemyHpInterfaceSpr.setOrigin(
        enemyHpInterfaceSpr.getGlobalBounds().left +
            enemyHpInterfaceSpr.getGlobalBounds().width / 2.0f,
        enemyHpInterfaceSpr.getGlobalBounds().top +
            enemyHpInterfaceSpr.getGlobalBounds().height / 2.0f);

    isLoaded = true;

  } // isLoaded
}
