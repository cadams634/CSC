// This program demonstrates the STL list container. 
#include <iostream>
#include <list>     // Include the list header
using namespace std;  

bool sumthing(int& value)
{
	if (value % 20 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	list<int> myList;
	list<int>::iterator iter; //subclass used to be a pointer to nodes
							  //two lines will always be required
	// Add values to the list
	for (int x = 0; x < 100; x += 10)
		myList.push_back(x);

	// Display the values
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	myList.remove_if(sumthing);

	// Display the values
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	// Now reverse the order of the elements
	myList.reverse();

	// Display the values again
	for (iter = myList.begin(); iter != myList.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	return 0;
}

