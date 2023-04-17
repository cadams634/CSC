#ifndef INTRANGE_H
#define INTRANGE_H   

#include <iostream>
#include <string>
using namespace std;

class IntRange
{
private:
  int input;	// For user input
  int lower;	// Lower limit of range
  int upper;	// Upper limit of range
public:
// Exception class
	class OutOfLowerRange
	{
	public:
		int userValue;
		OutOfLowerRange(int u)
		{
			userValue = u;
		}
	};

	class OutOfUpperRange
	{
	public:
		int userValue;
		OutOfUpperRange(int u)
		{
			userValue = u;
		}
	};


// Member functions
	IntRange(int low, int high)	// Constructor
	{
		this -> lower = low;
		this -> upper = high;
	};
	int getInput()
	{
		cin >> input;
		if (input < lower)
			throw OutOfLowerRange(input);
		else if (input > upper)
			throw OutOfUpperRange(input);
		return input;
	};
	double divide(int n, int d)
	{
		if (d == 0)
		{
			throw string("Division by 0 not possible!\n");
		}
	}
};
#endif