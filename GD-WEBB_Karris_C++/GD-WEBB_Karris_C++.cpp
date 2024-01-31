#include <iostream>  //Library for Input, Output stream
using namespace std; //Without using this you do not have access to the std vocabulary and must type things such as "std::cout"

int main()
{
	cout << "Hello there!" << endl;

	//Displays a text
	//cout = Console Out
	// <<OUT
	//Displaying from the console to the computer

	string name;

	//Converts string to answer

	cin >> name;

	//cin = Console In
	// >>IN
	//Takes from computer and stores it in Console

	cout << "Hello " << name << ", how are you today?" << endl;

	//endl is EndLine and is the same as \n

	int x = 23;

	//Establishing a value

	cout << "The value " << x << " is stored in " << &x;
	cout << "The value " << name << " is stored in " << &name;

	//The & calls the address of where a value is stored

}