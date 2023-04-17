#pragma once
class RecursionExample
{
private:
	int j = 0;
	void pm(int start, int end);

public:
	//On Midterm
	int message(int counter);
	int factorial(int n);
	int fibonacci(int n);
	int gcd(int x, int y);

	//Not on Midterm
	void hanoi(int n, int start, int end);
	          //# of disks, start, end pillars
};