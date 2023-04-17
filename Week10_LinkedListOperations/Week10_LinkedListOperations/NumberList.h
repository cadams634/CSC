#include <iostream>
using namespace std; 
template <class T>
class NumberList
{
protected:
    // Declare a class for the list node
    class ListNode
    {
    public:
       T value;
       T address;
       ListNode *next;
       ListNode(T value1, ListNode *next1 = nullptr)
       {
          
          value = value1;
          next = next1;

          static T count = 1;
          address = count;
          count++;
       }      
    };
    ListNode *head;                   // List head pointer
public:
    NumberList() { head = nullptr;  }    // Constructor
    ~NumberList();                    // Destructor
    void add(T number);
    void addSorted(T number);
    void remove(T number);
    void removeNode(T number);
    void displayList() const;
};

//*****************************************************
// add adds a new element to the end of the list.     *
//***************************************************** 
template <class T>
void NumberList<T>::add(T number)
{
    if (head == nullptr)
        head = new ListNode(number);
    else
    {
        // The list is not empty
        // Use nodePtr to traverse the list
        ListNode* nodePtr = head;
        while (nodePtr->next != nullptr)
            nodePtr = nodePtr->next;

        // nodePtr->next is nullptr so nodePtr points to last node
        // Create a new node and put it after the last node
        nodePtr->next = new ListNode(number);
        nodePtr = nullptr;
    }
}

template <class T>
void NumberList<T>::addSorted(T number)
{
    ListNode* nodePtr, * previousNodePtr;

    if (head == nullptr || head->value >= number)
    {   //add a node in front of pointer "head"
        head = new ListNode(number, head);
    }
    else //add node to back of pointer "head"
    {
        previousNodePtr = head;
        nodePtr = head->next;

        while (nodePtr != nullptr && nodePtr->value < number)
        {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        previousNodePtr->next = new ListNode(number, nodePtr);
    }
}

template <class T>
void NumberList<T>::remove(T number)
{
    ListNode* nodePtr, * previousNodePtr;

    if (!head)return;

    if (head->value == number)
    {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
        nodePtr = nullptr;
    }
    else
    {
        nodePtr = head;
        previousNodePtr = head;

        while (nodePtr != nullptr && nodePtr->value != number)
        {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (nodePtr)
        {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
            nodePtr = nullptr;
        }
    }
}

template <class T>
void NumberList<T>::removeNode(T number)
{
    ListNode* nodePtr, * previousNodePtr;

    if (!head)return;

    if (head->address == number)
    {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
        nodePtr = nullptr;
    }
    else
    {
        nodePtr = head;
        previousNodePtr = head;

        while (nodePtr != nullptr && nodePtr->address != number)
        {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (nodePtr)
        {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
            nodePtr = nullptr;
        }
    }
}

//***************************************************
// displayList outputs a sequence of all values     *
// currently stored in the list.                    *
//***************************************************
template <class T>
void NumberList<T>::displayList() const
{
    ListNode* nodePtr = head;   // Start at head of list
    while (nodePtr)
    {
        // Print the value in the current node
        cout << nodePtr->value << "    ";
        // Move on to the next node
        nodePtr = nodePtr->next;
    }
}

//******************************************************
// Destructor deallocates the memory used by the list. *
//******************************************************
template <class T>
NumberList<T>::~NumberList()
{
    ListNode* nodePtr = head;  // Start at head of list
    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        ListNode* garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
    }
}