#include <string>
#include <memory>
#include <iostream>
using namespace std;

enum class Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE };
enum class Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

class Person
{
protected:
    string name;
public:
    Person() 
    {
        cout << "Person default constructor called" << endl;
        setName("");
    }
    Person(const string& pName) 
    {
        cout << "Person overloaded constructor called" << endl;
        setName(pName); 
    }
    void setName(const string& pName) { name = pName; }
    virtual string getName() const { return name; }
};

class Student :public Person
{
private:
    Discipline major;
    shared_ptr<Person> advisor;
public:

    Student(const string& sname, Discipline d, const shared_ptr<Person>& adv)
        : Person(sname)
    {
        major = d;
        advisor = adv;
    }
    void setMajor(Discipline d) { major = d; }
    Discipline getMajor() const { return major; }
    void setAdvisor(shared_ptr<Person> p) { advisor = p; }
    shared_ptr<Person> getAdvisor() const { return advisor; }
};

class Faculty :public Person
{
private:
    Discipline department;
public:
    Faculty(const string& fname, Discipline d) : Person(fname)
    {
        cout << "Faculty overloaded constructor is called." << endl;
        department = d;
    }
    void setDepartment(Discipline d) { department = d; }
    Discipline getDepartment() const { return department; }
};

class TFaculty : public Faculty
{
private:
    string title;
public:
    TFaculty(const string& fname, Discipline d, string title)
        : Faculty(fname, d)
    {
        cout << "TFaculty overloaded constructor is called." << endl;
        setTitle(title);
    }
    void setTitle(const string& title) { this->title = title; }

    // Override getName()
    string getName() const
    {
        return title + " " + Person::getName();
    }
};