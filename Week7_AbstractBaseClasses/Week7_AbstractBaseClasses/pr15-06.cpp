// This program demonstrates abstract base
// classes and pure virtual functions.
#include "Shape.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std; 

int main()
{
    // Create vector of pointers to Shapes of various types    
    vector<shared_ptr<Shape>> shapes  
      {
          make_shared<Hexagon>(),
          make_shared<Rectangle>(),
          make_shared<Hexagon>()
     };
    // Set positions of all the shapes
    int posX = 5, posY = 15;
    for (int k = 0; k < shapes.size(); k++)
    {
        shapes[k]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    };

    // Draw all the shapes at their positions
    for (int j = 0; j < shapes.size(); j++)
    {
        shapes[j]->draw();
    }
    return 0;
}