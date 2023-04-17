#ifndef AUXIL_H  
#define AUXIL_H
// Aux class declaration.
class Aux 
{
private:
   double auxBudget[4];
public:
   Aux() 
   {
       for (int i = 0; i < 4; i++)
       {
           auxBudget[i] = 0;
       }
   }
   void addBudget(double, int, int c);
   double getDivBudget(int a) const { return auxBudget[a]; }
};
#endif