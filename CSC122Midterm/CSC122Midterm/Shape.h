#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Shape
{
protected:
	double perimeter;
	double area;
public:
	Shape()
	{
		perimeter = 0;
		area = 0;
	}
	Shape(const double& Tperimeter, const double& Tarea)
	{
		setPerimeter(Tperimeter);
		setArea(Tarea);
	}

	void operator<<(const Shape& right);

	virtual double calcPerimeter() const = 0;
	virtual double calcArea() const = 0;

	void setPerimeter(const double& Tperimeter) { perimeter = Tperimeter; }
	void setArea(const double& Tarea) { area = Tarea; }

	double getPerimeter() {return perimeter;}
	double getArea() { return area; }
	/*
	void readData()
	{
		cout << this->perimeter << endl;  // this works I just do not like it
		cout << this->area << endl;
	}
	*/
};

class Rectangle : public Shape
{
private:
	static double length;
    static double width;
public:
	Rectangle(double x, double y) 
	{
		length = x;
		width = y;

		setPerimeter(calcPerimeter());
		setArea(calcArea());
	}

	virtual double calcPerimeter() const override 
	{
		return (2 * this->length + 2 * this->width);
	}
	virtual double calcArea() const override
	{
		return this->length * this->width;
	}
};

class Circle : public Shape
{
private:
	static double radius;
public:
	Circle(double r)
	{
		radius = r;
		setPerimeter(calcPerimeter());
		setArea(calcArea());
	}

	virtual double calcPerimeter() const override
	{
		if (radius < 0)
		{
			throw string("Error: Negative radius.");
		}
		else
		return 2 * 3.14 * this->radius;
	}
	virtual double calcArea() const override
	{
		if (radius < 0)
		{
			throw string("Error: Negative raidus.");
		}
		else
			return 3.14 * this->radius * this->radius;
	}
};