// This program demonstrates the dynamic stack
// class DynIntStack.
#include <iostream>
#include <vector>
#include "DynIntStack.h" 
using namespace std;

int main()
{
    DynIntStack<string> stack;
    vector<string> values = { "ok", "sike", "cool" };
   string popped_value;
   // Push values 5, 10, and 15 on the stack
   for (int value = 0; value < 3; value++)
   {
      cout << "Push: " << values[value] << "\n";
      stack.push(values[value]);
   }
   cout << "\n";

   // Pop three values 
   for (int k = 1; k <= 3; k++)
   {
      cout << "Pop: ";
      stack.pop(popped_value);
      cout << popped_value << endl;
   }

   // Stack is now empty, a pop will cause an exception
   try
   {
      cout << "\nAttempting to pop again... ";
      stack.pop(popped_value);
   }
   catch (DynIntStack<string>::Underflow)
   {
      cout << "Underflow exception occured.\n";
   }
   return 0;
}