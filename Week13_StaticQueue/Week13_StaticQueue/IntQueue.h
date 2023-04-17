#include <memory>
using namespace std;
class IntQueue
{
private:
   unique_ptr<int []> queueArray;
   //int* queueArray;
   int queueSize; //capacity
   int front; // is front the item needs
   // to be served or the item that was
   // last served?
   int rear; //rear is the itm in the back
   int numItems; // the size of the queue,
   // actual items on the queue
public:
   IntQueue(int);
 
   void enqueue(int);
   void dequeue(int &);
   bool isEmpty() const;
   bool isFull() const;
   void clear(); //clear the queue, make
   // it empty
};

