#include "Pokemon.h"


Pokemon::Pokemon(std::string name, std::string description, std::vector<std::string>Abilities)
{
    mName = name;
    mDescription = description;
    mLife = 100;
    mAbilities = Abilities;
}
Pokemon::~Pokemon() {}

std::string Pokemon::getName() { return mName; }

std::string Pokemon::getDescription() { return mDescription; }

void Pokemon::takeDamage(int damage) 
{
    mLife = mLife - damage;
}
void Pokemon::heal(Pokemon self) 
{
    mLife = mLife + 30;
}
void Pokemon::attack(Pokemon enemy) 
{
    enemy.takeDamage(10);
}

void Pokemon::

void Pokemon::SetAbility(std::string ability)
{
    mAbilities.push_back(ability);
}
