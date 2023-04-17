#include "RecursionExample.h"
#include <iostream>
using namespace std;

int main()
{
	RecursionExample r;
	int i,j;
	int value1, value2, value3, value4, value5;

	cout << "Enter a Value: ";
	cin >> i;

	value1 = r.message(i);

	cout << "Message Value = " << value1 << endl;

	value2 = r.factorial(i);

	cout << "Factorial Value = " << value2 << endl;

	value3 = r.fibonacci(i);

	cout << "Fibonacci Value = " << value3 << endl;

	cout << "Enter a Second Value: ";
	cin >> j;

	value4 = r.gcd(i, j);

	cout << "GCD Value = " << value4 << endl;

	cout << "Tower of hanoi." << endl;

	r.hanoi(3, 1, 3);

	return 0;
} 