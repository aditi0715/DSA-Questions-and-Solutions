#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*
class {{drived-class-name }} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....;
}
1.Default visibility mode is private
2.Private visibility mode: in private visibility the public members of the base class will become private members of the derived class.
3.Public visibility mode: in public visibility the public members of the base class will become public members of the derived class.
4.Private members are never inherited.
*/

// creating a programmer class derived from base class that is employee class.

class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
};

int
main()
{
    Employee sarthak(1), aditi(2);
    cout << sarthak.salary << endl;
    cout << aditi.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode;
    return 0;
}