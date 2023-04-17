#include "RecursionExample.h"
#include <iostream>
using namespace std;

void RecursionExample::pm(int start, int end)
{
	static int nMoves = 1;
	cout << endl << nMoves << ": " << start
			<< "->" << end << endl;
	nMoves++;
}

int RecursionExample::message(int counter)
{
	cout << "Counter = " << counter << endl;
	if (counter > 0)
	{
		j = message(counter - 1); //send down loop, = 4
		j++;             // 4 + 1
	}
	return j;
}

int RecursionExample::factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n*factorial(n-1);
}

int RecursionExample::fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int RecursionExample::gcd(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}

	return gcd(y, x & y);
}

void RecursionExample::hanoi(int n, int start, int end)
{
	int other;

	if (n == 1)
		pm(start, end);
	else
	{
		other = 6 - (start + end);
		hanoi(n - 1, start, other);
		pm(start, end);
		hanoi(n - 1, other, end);
	}
}
