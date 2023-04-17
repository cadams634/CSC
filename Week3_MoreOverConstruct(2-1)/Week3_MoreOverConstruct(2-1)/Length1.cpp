#include "Length1.h" 

//**********************************************
// Overloaded stream extraction operator >>    *
//**********************************************
istream &operator>>(istream &in, Length &a)
{
    // Prompt for and read the object data
    int feet,  inches;
    cout << "Enter feet: ";
    in >> feet;
    cout << "Enter inches: ";
    in >> inches;

    // Modify the object a with the data and return
    a.setLength(feet, inches);
    return in;
}

//*********************************************
// Overloaded stream insertion operator <<    *
//*********************************************
ostream &operator<<(ostream& out, Length a)
{
    out << a.getFeet() << " feet, " << a.getInches() << " inches";
    return out;
}

//***********************************
// Overloaded prefix ++ operator    *
//***********************************
Length operator++(Length a)
{
    
}

//***********************************
// Overloaded postfix ++ operator   *
//***********************************
Length operator++(int)
{
    Length::len_inches++;
}

//*************************************
// Overloaded operator -              *
//*************************************
Length Length::operator+()
{
    Length temp = *this;
    len_inches++;
    return temp;
}

//*************************************
// Overloaded  operator -             *
//*************************************
Length Length::operator-()
{
    Length temp = *this;
    len_inches--;
    return temp;
}

//************************************
// Overloaded operator ==            *
//************************************
bool Length::operator==()
{
    Length temp;

    if (temp == *this;)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//************************************
// Overloaded operator <             *
//************************************
bool Length::operator<()
{
    Length temp;

    if (temp < *this;)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}