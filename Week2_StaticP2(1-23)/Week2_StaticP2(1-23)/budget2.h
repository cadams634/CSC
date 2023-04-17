#ifndef BUDGET_H
#define BUDGET_H   

class Budget
{
private:
   static double corpBudget; // static/global variable
   double divBudget; //non-static variables
public:
   Budget() { divBudget = 0; }
   void addBudget(double b)
       { divBudget += b; corpBudget += divBudget; }
   double getDivBudget(/*Budget* this*/) const { return divBudget; }
   static double getCorpBudget()  
   { return corpBudget; }
   static void mainOffice(double);
};
#endif