#pragma once
#include <iostream>
#include<vector>

class Pokemon
{
private:
	std::string pokemonName;
	std::string pokemonDescription;
	int life;
	std::vector<std::string>Abilities;

public:
	Pokemon(std::string name, std::string description, std::string Abilities);
	~Pokemon();
	std::string getName();
	std::string getDescription();
	std::string getLife();
	void SetAbility(std::string Ability);

};

