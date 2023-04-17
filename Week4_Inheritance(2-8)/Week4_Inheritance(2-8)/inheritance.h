#include <string>  
#include <memory> // for smart pointers
using namespace std;

enum class Discipline {ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum class Classification {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
private:
    string name;
public:
    Person() { setName(""); }
    Person(const string& pName) { setName(pName); }
    void setName(const string& pName) { this->name = pName; }
    string getName() const { return this->name; }
};

class Student : public Person  // Student class is inheriting from Person class
{                              // All variables and methods of Person are now
private:                       // accesible by Student
    Discipline major;
    shared_ptr<Person> advisor; // Person *advisor
public:
    void setMajor(Discipline d) { this->major = d; }
    Discipline getMajor() const { return this->major; }
    void setAdvisor(shared_ptr<Person> p) { this->advisor = p; }
    shared_ptr<Person> getAdvisor() const { return this->advisor; }
    // Person* getAdvisor() const {return this->advisor;}
};

class Faculty : public Person //Faculty now inheriting from Person class
{
private:
    Discipline department;
public:
    void setDepartment(Discipline d) { department = d; }
    Discipline getDepartment() const { return department; }
};




