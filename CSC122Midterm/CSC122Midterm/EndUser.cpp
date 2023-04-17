#include "Shape.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

double Rectangle::length;
double Rectangle::width;

double Circle::radius;

int main()
{
	vector <double> myNumbers;
	double temp;

	//read the data into an array;
	ifstream ipFile("inputText.txt");
	ofstream otFile("answers.txt");

	int i = 0;
	cout << "Numbers from file: \n" << endl;
	try
	{
		while (!ipFile.eof())
		{
			ipFile >> temp;
			if (temp != 50)
			{
				myNumbers.push_back(temp);
				cout << myNumbers[i] << ", ";
				i++;
			}
			else if(temp == 50)
			{
				ipFile.close();
				throw string("(Read Ended: Not Permitted Data Detected.)\n");
			}
		}

	}
	catch (string exception)
	{
		cout << exception << endl;
	}

	vector<Shape*> shapes
	{
		new Rectangle(myNumbers[0], myNumbers[1]),
	    new Circle(myNumbers[2]),
		new Rectangle(myNumbers[3], myNumbers[4]),
	    new Circle(myNumbers[5]),
		new Rectangle(myNumbers[6], myNumbers[7]),
		new Circle(myNumbers[8]),
		new Rectangle(myNumbers[9], myNumbers[10]),
		new Circle(myNumbers[11])		
	};

	i = 0;
	try 
	{
		for (i = 0; i < shapes.size(); i++)
		{
			shapes[i]->calcArea();          //Delivering value of 0
			shapes[i]->calcPerimeter();     //Fix this and we should be golden.

			//shapes[i]->readData();
		}
	}
	catch (string exceptionstring)
	{
		cout << exceptionstring << endl;
	};

	cout << "Calculations of Object Held Arguments: \n";
	cout << "===================================== \n";
	for (int i = 0; i < shapes.size(); i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7)
		{
			otFile << "Area of Circle " << i + 1 << ":    ";
			otFile << shapes[i]->getArea() << endl;      

			cout << "Area of Circle " << i + 1 << ":    ";
			cout << shapes[i]->getArea() << endl;      
		}
		else
		{
			otFile << "Area of Rectangle " << i+1 << ": ";
			otFile << shapes[i]->getArea() << endl;      

			cout << "Area of Rectangle " << i + 1 << ": ";
			cout << shapes[i]->getArea() << endl;     
		}
	}                                                   

	otFile << endl;
	cout << endl;

	for (int i = 0; i < shapes.size(); i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7)
		{

			otFile << "Perimeter of Circle " << i+1 << ":    ";
			otFile << shapes[i]->getPerimeter() << endl;     //WHY YOU SPITTEN 0 

			cout << "Perimeter of Circle " << i+1 << ":    ";
			cout << shapes[i]->getPerimeter() << endl;     //WHY YOU SPITTEN 0

		}
		else
		{

			otFile << "Perimeter of Rectangle " << i+1 << ": ";
			otFile << shapes[i]->getPerimeter() << endl;     //WHY YOU SPITTEN 0 

			cout << "Perimeter of Rectangle " << i+1 << ": ";
			cout << shapes[i]->getPerimeter() << endl;     //WHY YOU SPITTEN 0 
		}
	}                                                     
	otFile << endl;

	otFile.close();

	return 0;
}

void Shape::operator<<(const Shape& right)
{
	ofstream otFile("answers.txt");

	otFile << right.area << endl;
	otFile << right.perimeter << endl;

	otFile.close();
	
}
