#ifndef BUDGET3_H 
#define BUDGET3_H
#include "auxil.h"	// For Aux class declaration 

// Budget class declaration
class Budget
{
private:
    static double corpBudget;
    static double divBudget[4];
public:
    Budget() 
    {
        for (int i = 0; i < 4; i++)
        {
            divBudget[i] = 0;
        }
    }
    static double getDivBudget(int a) { return divBudget[a]; }
    static double getCorpBudget() { return corpBudget; }
    static void mainOffice(double);
    friend void Aux::addBudget(double, int, int);

};
#endif