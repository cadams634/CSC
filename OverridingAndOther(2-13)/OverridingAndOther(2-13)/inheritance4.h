#include <string>
#include <memory> 
using namespace std;

enum class Discipline {ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum class Classification {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
protected:
   string name;
public:
   Person() { setName(""); }
   Person(const string& pName) { setName(pName); }
   void setName(const string& pName) { name = pName; }
   string getName() { return name; }
};

class Student :public Person
{
private:
   Discipline major;
   Person* advisor;
public:
   //constructor
   Student(const string& sname, Discipline d, Person* adv);
   void setMajor(Discipline d) { major = d; }
   Discipline getMajor() { return major; }
   void setAdvisor(Person* p) { advisor = p; }
   Person* getAdvisor() { return advisor; }
};

class Faculty :public Person
{
private:
   Discipline department;
public:
   //constructor
   Faculty(string fname, Discipline d) : Person(fname)
   {
      department = d;
   }
   void setDepartment(Discipline d) { department = d; }
   Discipline getDepartment() { return department; }
};

class TFaculty : public Faculty
{
private:
   string title;
public:
   TFaculty(string fname, Discipline d, string title)
      : Faculty(fname, d) {
      setTitle(title);
   }
   void setTitle(string title) { this->title = title; }
   //override getName()
   string getName() { return title + " " + Person::getName(); }
};

class TStudent : public Student
{
private:
    string title;
public:
    TStudent(string fname, Discipline d, Person* adv, string title)
        : Student(fname, d, adv) {
        setTitle(title);
    }
    void setTitle(string title) { this->title = title; }
    //override getName()
    string getName() { return title + " " + Person::getName(); }
};





