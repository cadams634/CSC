#pragma once
class MyCircle
{
private:
	const double PI = 3.14159265359; // only accessible by methods when in private
	int myLetters[20]; // array of 20 letter, myLetters[0] = 'a', etc.   
						// index runs from 0 - 19

public:
	int radius; // scoping variable rules by moving it to the header file
	int maxNumber = 900;
	int minNumber = 500;
	void askUser();
	void generateRN();
	double calcAreaCircle();
	double calcPerimeterCircle();
};