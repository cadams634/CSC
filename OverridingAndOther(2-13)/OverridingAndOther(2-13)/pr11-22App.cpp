// This program demonstrates the use of the constructor
// initialization list to call a base constructor. 

#include "inheritance4.h"//Inheritance hierarcy is up and running
                        // for Person, Student, Faculty, TFaculty
#include <iostream>
using namespace std;

// These arrays of string are used to print values
// of enumerated types.
const string dName[] 
      = { "Archeology", "Biology", "Computer Science" }; //dName[0,1,2,3] array

const string cName[] 
      = { "Freshman", "Sophomore", "Junior", "Senior" };

int main()
{
    // Create  Faculty and Student objects
   // shared_ptr<TFaculty>
      //  prof = make_shared<TFaculty>("Indiana Jones",
           // Discipline::ARCHEOLOGY, "Dr.");
    TFaculty *prof = new TFaculty("Indiana Jones", Discipline::ARCHEOLOGY, "Dr.");

   // shared_ptr<Student> 
    //st = make_shared<Student>("Sean Bolster", 
      //                        Discipline::ARCHEOLOGY, prof);

    TStudent* st = new TStudent("Sean Bolster",
        Discipline::ARCHEOLOGY, prof, "Barron");

    cout << prof->getName() << " teaches "
         << dName[static_cast<int>(prof->getDepartment())] 
         << "." << endl;

    // Get the student's advisor
    Person* pAdvisor = st->getAdvisor();
    cout << st->getName() << "\'s advisor is "
         << pAdvisor->getName() << ".";

    delete prof;
    delete st;
    prof = nullptr;
    st = nullptr;

    cout << endl;
    return 0;
}


