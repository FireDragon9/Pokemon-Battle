#include <SFML/Graphics.hpp>

using namespace sf;

// Textures
inline Texture backgroundTxt;
inline Texture playerHpInterfaceTxt;
inline Texture enemyHpInterfaceTxt;

// Sprites
inline Sprite backgroundSpr;
inline Sprite playerHpInterfaceSpr;
inline Sprite enemyHpInterfaceSpr;

static bool isBattleTxtLoaded = false;

inline void loadBattleTexture() {
  if (!isBattleTxtLoaded) {

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

    isBattleTxtLoaded = true;

  } // isLoaded
}
