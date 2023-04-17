#include "MyCircle.h"
#include <iostream>
#include <cmath>
#include <cstdlib> // random number generator [rand()]
#include <ctime> // time
using namespace std;

void MyCircle::askUser()
{
	cout << "Array size is: "
		<< sizeof(myLetters) / sizeof(int) << endl;
	//cout << "Enter radius of circle: ";
	//cin >> radius;
}

void MyCircle::generateRN()
{
	int seed = time(0); // seed is now the number of ms since epoch
	srand(seed); // change the seed of the generator to seed value from line 16
	for (int i = 0; i < 1; i++)
	{
		radius = (rand() % (maxNumber - minNumber + 1)) + minNumber;
		cout << "Random number generated: " << radius << endl;
	}
}

double MyCircle::calcAreaCircle()
{
	double area;
	
	area = PI * pow(radius, 2);

	return area;

}

double MyCircle::calcPerimeterCircle()
{
	double perimeter;

	perimeter = 2 * PI * radius;

	return perimeter;

}
