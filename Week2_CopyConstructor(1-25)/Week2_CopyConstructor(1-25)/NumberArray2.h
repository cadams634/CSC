#include <iostream> 
using namespace std; 

class NumberArray
{
private:
  double *aPtr;
  int arraySize;
  static int i;
public:
  NumberArray(const NumberArray &); //Copy Constr. signature
  NumberArray(int size, double value);
  ~NumberArray() { if (arraySize > 0) delete [] aPtr; }
  void print() const;
  void setValue(double value);
  void foo(NumberArray &n);
  NumberArray &foo2(NumberArray n);

  int getI() { return i; }
};