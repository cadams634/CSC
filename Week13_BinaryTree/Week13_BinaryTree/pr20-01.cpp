// This program builds a binary tree with 5 nodes.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
   IntBinaryTree tree;

   cout << "Inserting numbers. ";
   tree.insert(12);
   tree.insert(7);
   tree.insert(9);
   tree.insert(10);
   tree.insert(22);
   tree.insert(24);
   tree.insert(30);
   tree.insert(18);
   tree.insert(3);
   tree.insert(14);
   tree.insert(20);
   cout << "Done Inserting.\n";
   cout << "Values in Order (L Root R): \n";
   tree.showInOrder();//L Root R
   cout << endl;
   cout << "Values in PreOrder (Root L R): \n";
   tree.showPreOrder();//Root L R
   cout << endl;
   cout << "Values in PostOrder (L R Root): \n";
   tree.showPostOrder();//L R Root
   return 0;
}

