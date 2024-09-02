#include "Pokemon.h"

#include <string>

Pokemon::Pokemon(std::string name) { setName(name); };

void Pokemon::setName(std::string &name) { pkmName = name; }

std::string Pokemon::getName() const { return pkmName; }
