#pragma once
#include <iostream>
using namespace std;

class Shape //Abstract Class, contains a PVM
{           // PVM { virtual  ...  ....  ... = 0;}
protected:
    int posX, posY;
public:
    virtual void draw() const = 0; //Pure Virtual Method, no code to run
                                   //useless base class, needs subclass to override.
    void setPosition(int pX, int pY)
    {
        posX = pX;
        posY = pY;
    }
};

class Rectangle : public Shape
{
public:
    virtual void draw() const //Overriding PVM, must copy base method "const" & "void"
    {
        cout << "Drawing rectangle at " << posX << "  "
            << posY << endl;
    }
};

class Hexagon : public Shape
{
public:
    virtual void draw() const //Overriding PVM, must copy base method "const" & "void"
    {
        cout << "Drawing hexagon at " << posX << "  "
            << posY << endl;
    }
};
