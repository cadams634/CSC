#include <memory>
using namespace std;
template <class T>
class IntStack
{
   //unique_ptr<int[]>stackArray;
   T* stackArray;
   int capacity;
   int top;
public:
   // Constructor 
   IntStack(int capacity);

   // Member functions
   void push(T value);
   void pop(T &value);
   bool isEmpty() const;

   // Stack Exceptions 
   class Overflow {};
   class Underflow {};
};


//************************************
// Constructor                       *
//************************************
template <class T>
IntStack<T>::IntStack(int capacity)
{
	//stackArray = make_unique<int[]>(capacity);
	stackArray = new T[capacity];
	this->capacity = capacity;
	top = 0;
}

//***********************************
// Adds a value to the stack        *
//***********************************
template <class T>
void IntStack<T>::push(T value)
{
	if (top == capacity) throw IntStack::Overflow();
	stackArray[top] = value;
	top++;
}

//****************************************
// Determines whether the stack is empty *
//****************************************
template <class T>
bool IntStack<T>::isEmpty() const
{
	return top == 0;
}

//************************************************
// Removes a value from the stack and returns it *
//************************************************
template <class T>
void IntStack<T>::pop(T& value)
{
	if (isEmpty()) throw IntStack::Underflow();
	top--;
	value = stackArray[top];
}