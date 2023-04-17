#include <iostream>
#include <string>
using namespace std;

int main()
{
	double d = 1.1; // 8 bytes
	int i = 12; // 4 bytes
	char c = 'A'; // 1 byte
	bool b = 1; // 1 = Ture, 0 = False; 1 bit
	float f = 23.345; // 4 bytes
	string s = "This is a sentence."; // pointer to 19 bytes

	cout << "Size of double: " << sizeof(double) << " bytes" << endl; //data type // does not matter variable or data
	cout << "Size of int: " << sizeof(int) << " bytes" << endl; // data type
	cout << "Size of char: " << sizeof(c) << " bytes" << endl; //variable
	cout << "Size of bool: " << sizeof(b) << " bit" << endl; // variable
	cout << "Size of float: " << sizeof(float) << " bytes" << endl; // datat type
	cout << "Size of string: " << sizeof(s) << " bytes" << endl; // variable type

	return 0;


}