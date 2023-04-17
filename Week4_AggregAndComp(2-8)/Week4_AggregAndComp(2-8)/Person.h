#pragma once
// This program illustrates aggregation, composition
// and object lifetimes. 
#include <iostream>
#include <string>
using namespace std;

class Date
{
    string month;
    int day, year;
    int personID; //ID of person whose birthday this is.
public:
    Date(string m, int d, int y, int id) :
        month(m), day(d), year(y), personID(id)
    {
        cout << "Date-Of-Birth object for person "
            << personID << " has been created.\n";
    }
    ~Date()
    {
        cout << "Date-Of-Birth object for person "
            << personID << " has been destroyed.\n";
    }
};

class Country
{
    string name;
public:
    Country(string name1) : name(name1)
    {                    // this->name = name1;
        cout << "A Country object has been created.\n";
    }
    ~Country()
    {
        cout << "A Country object has been destroyed.\n";
    }
};

class Person
{
    string name;
    Date dateOfBirth;
    int personID; // Person identification number (PID)
    Country* pCountry;
public:
    Person(string name, string month, int day, int year, Country*& pC) :
                                                        // shared_ptr<Country>& pC
        name(name),
        dateOfBirth(month, day, year, Person::uniquePersonID),
        personID(Person::uniquePersonID),
        pCountry(pC)
    {
        cout << "Person object "
            << personID << " has been created.\n";
        Person::uniquePersonID++;
    }
    ~Person()
    {
        cout << "Person object "
            << personID << " has been destroyed.\n";
    }
    static int uniquePersonID; // Used to generate PIDs
};