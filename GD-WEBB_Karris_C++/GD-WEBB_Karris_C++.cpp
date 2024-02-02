#include <iostream>  //Library for Input, Output stream
using namespace std; //Without using this you do not have access to the std vocabulary and must type things such as "std::cout"

//Function Fine Pokemon
p Pokemon()
{
	cout << "Hello there! What would you like to name your Pokemon?" << endl;

	string name;

	cin >> name;
	cout << "Thank you for bringing in " << name << " today. How you describe " << name << "?\n";

	string description;
	cin >> description;

	int mLife = 100;

	cout << "It looks like " << name << " is at full health today! There is no need for any healing!" << endl;

	return mLife;
}