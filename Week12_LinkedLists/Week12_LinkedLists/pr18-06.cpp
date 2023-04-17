// This program demonstrates the linked list template 
// being used to create a linked list of strings.
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList list;

   	// Build the list
      list.add(1.1);
      list.add(2.2);
      list.add(3.3);
      list.add(4.4);

      cout << "Here are the initial names:\n";
      list.displayList();
      cout << "\n\n";

      cout << "Now removing 2.2.\n\n";
      list.remove(2.2);
      cout << "Here are the remaining elements.\n";
      list.displayList();
      cout << endl;

      return 0;
}