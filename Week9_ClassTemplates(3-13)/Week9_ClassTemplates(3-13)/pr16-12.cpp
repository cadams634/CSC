// This program demonstrates the SearchableVector template.
#include <iostream>
#include "searchvect.h"
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;
    try
    {
        SearchableVector<int> intTable(SIZE);
        SearchableVector<double> doubleTable(SIZE);
        SearchableVector<string> stringTable(SIZE);

        // Store values in the vectors
        for (int x = 0; x < SIZE; x++)
        {
            
            intTable[x] = (x * 2);
            doubleTable[x] = (x * 2.14);
        }

        stringTable[0] = "Tom";
        stringTable[1] = "Charlie";
        stringTable[2] = "Sanju";
        stringTable[3] = "Zach";
        stringTable[4] = "Conner";

        // Display the values in the vectors
        cout << "\nThese values are in intTable:\n";
        for (int x = 0; x < SIZE; x++)
            cout << intTable[x] << " ";
        cout << endl;
        cout << "\nThese values are in doubleTable:\n";
        for (int x = 0; x < SIZE; x++)
            cout << doubleTable[x] << " ";
        cout << endl;
        cout << "\nThese values are in stringTable:\n";
            for (int x = 0; x < SIZE; x++)
                cout << stringTable[x] << " ";
        cout << endl;

        // Now search for values in the vectors 
        int result;
        cout << "\nSearching for 6 in intTable.\n";
        result = intTable.findItem(6);
        if (result == -1)
            cout << "6 was not found in intTable.\n";
        else
            cout << "6 was found at subscript "
            << result << endl;

        cout << "\nSearching for 12.84 in doubleTable.\n";
        result = doubleTable.findItem(12.84);
        if (result == -1)
            cout << "12.84 was not found in doubleTable.\n";
        else
            cout << "12.84 was found at subscript "
            << result << endl;

        cout << "\nSearching for Tom in doubleTable.\n";
        result = stringTable.findItem("Tom");
        if (result == -1)
            cout << "Tom was not found in doubleTable.\n";
        else
            cout << "Tom was found at subscript "
            << result << endl;

        cout << doubleTable[10];
    }
    catch (string s)
    {
        cout << s << endl;
    }
    return 0;
}