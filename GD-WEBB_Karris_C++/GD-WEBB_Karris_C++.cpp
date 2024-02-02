#include <iostream>  //Library for Input, Output stream
using namespace std; //Without using this you do not have access to the std vocabulary and must type things such as "std::cout"

//Function Fine Pokemon
void Pokemon()
{
	cout << "Hello there! What would you like to name your Pokemon?" << endl;

	string mName;

	cin >> mName;
	cout << "Thank you for bringing in " << mName << " today. How you describe " << mName << "?\n";

	string mDescription;
	cin >> mDescription;

	int mLife = 100;

	cout << "It looks like " << mName << " is at full health today! There is no need for any healing!" << endl;

}