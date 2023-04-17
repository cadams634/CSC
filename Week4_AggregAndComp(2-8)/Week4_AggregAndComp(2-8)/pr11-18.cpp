#include "Person.h"

// Define the static class variable
int Person::uniquePersonID = 1;

int main()
{
   // Create a Country object
   //shared_ptr<Country> p_usa = make_shared<Country>("USA");
   Country *p_usa = new Country("USA");

   // Create a Person object
   //shared_ptr<Person> p = make_shared<Person>("Peter Lee", "January", 1, 1985, p_usa);
   Person* p = new Person("Peter Lee", "January", 1, 1985, p_usa);
  
   // Create another Person object
   //shared_ptr<Person> p1 = make_shared<Person>("Eva Gustafson", "May", 15, 1992, p_usa);
   Person *p1 = new Person("Eva Gustafson", "May", 15, 1992, p_usa);

   cout << "Now there are two people.\n";

   delete p_usa;
   delete p;
   delete p1;
   p_usa = nullptr;
   p = nullptr;
   p1 = nullptr;

   // Both persons will go out of scope when main returns
   return 0;
}

