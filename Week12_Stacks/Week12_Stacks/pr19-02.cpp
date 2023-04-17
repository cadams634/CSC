//This program illustrates  IntStack exception handling. 
#include "intstack.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   
   IntStack<string>  stack(5); //capacity 5, predetermined
  // int values[] = { 5, 10, 15, 20, 25 };
   vector<string> valuesV = { "ok", "no", "yes", "whatever", "forreal!" };
   string value;
   try
   {
      cout << "Pushing...\n";
      for (int k = 0; k < 5; k++)
      {
         cout << valuesV[k] << "  ";
         stack.push(valuesV[k]);
      }
      cout << "\nPopping...\n";
      for (int k = 0; k < 5; k++)
      {
          cout << valuesV[k] << "  ";
          stack.pop(valuesV[k]);
      }
      cout << "\nPopping value after stack is full..";
      stack.pop(value);
      cout << "\nYou should not see this!!";
      cout << endl;
   }
   catch (IntStack<string>::Overflow)
   {
      cout << "\nAn Overflow exception occurred.\n";
   }
   catch (IntStack<string>::Underflow)
   {
       cout << "\nAn Underflow exception occurred.\n";
   }
   
   return 0;
}