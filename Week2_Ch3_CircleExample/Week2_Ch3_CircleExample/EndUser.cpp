#include "MyCircle.h"
#include <iostream>
#include <iomanip> // setprecision requires this
using namespace std;

int main()
{
	MyCircle mc;
	double area;
	double perimeter;

	//cout << "Memory occupied by MyCircle mc object: " << sizeof(mc) << " bytes.\n";
	//cout << "Memory occupied by MyCircle class: " << sizeof(MyCircle) << " bytes.\n";
	mc.askUser();
	/*
	mc.generateRN();
	// mc.askUser();
	area = mc.calcAreaCircle();
	cout << fixed << showpoint << setprecision(3);

	std::cout << "Area of a circle with "
		<< "raidus " << mc.radius << " cm"
		<< " = " << area << " cm^2\n";

	perimeter = mc.calcPerimeterCircle();
	cout << fixed << showpoint << setprecision(3);

	std::cout << "Perimeter of a circle with "
		<< "radius " << mc.radius << " cm"
		<< " = " << perimeter << " cm\n";
	*/
	return 0; 

}