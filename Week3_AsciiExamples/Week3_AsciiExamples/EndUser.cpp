#include <iostream>
#include "EchoProgram.h"
using namespace std;

int main()
{
	// 3 ways you can read characters and words and sentences from the keyboard
	// 1. cin >> 2. getline(cin, <string variable>) 3. c = cin.get() 
	// cin >> <string variable> will read up to the first space
	// getline will read the entire line up to the newline char '\n' or endl
	// cin.get will read just one char
	EchoProgram ep;

	ep.showMenu();

	return 0;
}