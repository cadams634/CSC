// This program illustrates the building  
// and traversal of a linked list.
#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
  {
     double value;
     ListNode *next;
     // Constructor
     ListNode(double value1, ListNode *next1 = nullptr)
     {
       value = value1;
       next = next1;
     }
  };

int main()
{  
   double number;                    // Used to read the file
   ListNode *numberList = nullptr;   // List of numbers
   
   // Open the file
   ifstream numberFile("numberFile.dat");
   if (!numberFile) 
   {
      cout << "Error in opening the file of numbers."; 
      exit(1);
   } 	  
   // Read the file into a linked list    
   cout << "The contents of the file are: " << endl;
   while (numberFile >> number)
   {
      cout << number << "  ";
      // Create a node to hold this number

      if (numberList == nullptr)
          numberList = new ListNode(number);
      else
      {
          // The list is not empty
          // Use nodePtr to traverse the list
          ListNode* nodePtr = numberList;
          while (nodePtr->next != nullptr)
              nodePtr = nodePtr->next;

          // nodePtr->next is nullptr so nodePtr points to last node
          // Create a new node and put it after the last node
          nodePtr->next = new ListNode(number);
          nodePtr = nullptr;
      }
   }
   // Traverse the list while printing
   cout << endl << "The contents of the list are: " << endl;
   ListNode *ptr = numberList;
   while (ptr != nullptr)
   {
      cout << ptr->value << "  "; // Process node
      ptr = ptr->next;            // Move to next node
   }
   return 0;
}