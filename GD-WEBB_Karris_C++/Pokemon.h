#pragma once
#include <iostream>
#include<vector>

class Pokemon
{
private:
	std::string mName;
	std::string mDescription;
	int mLife;
	int mHeal;
	int mDamage;
	std::vector<std::string>mAbilities;

public:
	Pokemon(std::string name, std::string description, std::vector<std::string>Abilities);
	~Pokemon();
	std::string getName();
	std::string getDescription();

	void takeDamage(int life);
	void heal(Pokemon self);
	void attack(Pokemon enemy);

	void SetAbility(std::string ability);

};

