#include "EchoProgram.h"
#include <iostream>
#include <string>
using namespace std;

void EchoProgram::showMenu()
{
	int userChoice;

	cout << "Please choose: " << endl;
	cout << "*************************************" << endl << endl;
	cout << "1) Use Method 1 to read user sentence.\n";
	cout << "2) Use Method 2 to read user sentence.\n";
	cout << "3) Use Method 3 to read user sentence.\n";
	cout << "4) Quit!\n" << endl;
	cout << "*************************************" << endl << endl;
	cin >> userChoice; 

	if (userChoice == 1)
	{
		doMethod1();	
	}
	else if (userChoice == 2)
	{
		doMethod2();
	}
	else if (userChoice == 3)
	{
		doMethod3();
	}
	else if (userChoice == 4)
	{
		doQuit();
	}
}

void EchoProgram::doMethod1()
{
	string firstName, lastName;
	// cin >>
	cout << "Please enter your full name: "; // Amit Sinha
	cin >> firstName >> lastName;
	cout << "Reversing firstName, lastName: " << lastName << ", " << firstName << endl;
}

void EchoProgram::doMethod2()
{
	string fullName;

	//get.line
	cout << "Please enter your full name: "; // Amit Sinha
	cin.ignore(); // ignore the "\n" character
	getline(cin, fullName);
	cout << "Your name is: " << fullName << endl;
}

void EchoProgram::doMethod3()
{
	// cin.get
	char c;

	cout << "Please enter your full name: "; // Amit Sinha
	cin.ignore();

	for (int i = 0; i < 10; i++)
	{
		c = cin.get();
			cout << c;
	}
	c = cin.get();
	cout << endl;
	

}

void EchoProgram::doQuit()
{
	cout << "\n\nHave a nice day!\n\n";
}
