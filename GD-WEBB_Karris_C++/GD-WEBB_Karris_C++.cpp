#include <iostream>  //Library for Input, Output stream
using namespace std; //Without using this you do not have access to the std vocabulary and must type things such as "std::cout"


//Function EarnMoney
void EarnMoney(int* wallet, int wage) //The star points to the Address, not the value, so now wallet is found within bankAccount, and includes the variable
{
	wallet += wage;
	//wallet = wallet + wage;

	wallet -= (int)(wage / 4);
	//Taxation
}

//Function say hi
int main()
{
	cout << "Hello there! What name is your Account under?" << endl;
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

	cout << "Hello " << name << ", welcome to The ArtFX Bank!\n";

	//endl is EndLine and is the same as \n

	int money = 50000;
	//Establishing a value

	int* bankAccount = &money;
	//Stores the address of money in BankAccount

	cout << "Your account name " << name << " is stored in : " << &name << endl;
	cout << "Your balance " << money << " is stored in : " << &money << endl;
	cout << "You can find your bankAccount at this address : " << &bankAccount << endl;
	//The & calls the address of where a value is stored

	EarnMoney(bankAccount, 10000);
	//Pulls the stored address of bankAccount and adds the function of EarnMoney to the given variable
	// (Function , Variable)

	cout << "After wages and taxes you have : " << money;
	//Console out text and updated money variable

}