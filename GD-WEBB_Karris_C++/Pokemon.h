#pragma once
#include <iostream>
#include<vector>

//.h = TABLE OF CONTENTS FOR .cpp
class Pokemon
{
public:
	std::string mName;
	std::string mDescription;
	std::vector<std::string>mAbilities;

	int mLife;
	int mHeal;
	int mDamage;

	bool inBall;

public:
	Pokemon(std::string name, std::string description, std::vector<std::string>Abilities);
	~Pokemon();
	std::string getName();
	std::string getDescription();

	void takeDamage(int life);
	void heal();
	void attack(Pokemon enemy);
	void exitBall();

	void setAbility(std::string ability);

};

