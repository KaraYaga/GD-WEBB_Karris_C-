#include "Pokemon.h"


Pokemon::Pokemon(std::string pokemonName, std::string pokemonDescription, std::vector<std::string>Abilities)
{
    pokemonName = name;
    pokemonDescription = description;
    life = 100;
    abilitiy = std::vector<std::string>Abilities;
}
Pokemon::~Pokemon() {}

std::string Pokemon::getName() { return pokemonName; }

std::string Pokemon::getDescription() { return pokemonDescription; }

float Pokemon::getLife(float life) { life = 100;}

void Pokemon::SetAbility(std::string ability) {ability =  }
