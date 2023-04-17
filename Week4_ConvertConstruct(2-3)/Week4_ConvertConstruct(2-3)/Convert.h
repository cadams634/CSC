#include <iostream>  
using namespace std;

class IntClass
{
private:
   int value;
public:
   // Convert constructor from int
   IntClass(int intValue)
   {
       static int counter = 1;
       cout << "Convert Constructors "
           << "called with counter: "
           << counter++ << endl;
      value = intValue;
   }
   int getValue() const { return value; }
};
