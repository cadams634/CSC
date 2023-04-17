// This program demonstrates the use of object-oriented 
// exception handling. 
#include <iostream>
#include <string>
#include "IntRange.h"
using namespace std; 

int main()
{
   int min = 5, max = 10;

   IntRange range(min, max);
   int userValue;
   int result;
    
   cout << "Enter a value in the range 5 - 10: ";
   try
   {
	   userValue = range.getInput();
       cout << "You entered " << userValue << endl;

       result = range.divide(3, 0);
       cout << "Result = " << result << endl;
   }
   catch (IntRange::OutOfLowerRange e)
   {
       cout << e.userValue << " is out of lower range.\n";
   }
   catch (IntRange::OutOfUpperRange e)
   {
       cout << e.userValue << " is out of upper range.\n";
   }
   catch (string e)
   {
       cout << e;
   }
   cout << "End of the program.\n";
   return 0;
}