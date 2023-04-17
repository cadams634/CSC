// This program demonstrates the add and 
// display linked list operations. 

#include "Numberlist.h"
using namespace std;

int main()
{
    NumberList<int> list;
    list.addSorted(12);
    list.addSorted(5);
    list.addSorted(7);
    list.addSorted(18);

    cout << "Here is the list: " << endl;
    list.displayList();

    cout << "\nRemoval of node with value 5." << endl;
    list.remove(5);

    list.displayList();

    cout << "\nRemoval of node with predetermined location of 4." << endl;
    list.removeNode(4);
 
    list.displayList();

    cout << endl;
    return 0;
}