
/*
// Inside class definition

#include <iostream>
using namespace std;

class ThisClass
{
public:
    // int num;
    void print() // Definition function inside class
    {
        cout << "Hello";
    }
};

int main()
{

    ThisClass c1;
    c1.print();

    return 0;
}
*/

// Definition outside class

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string stname;
    int id;

    // Printname is not defined inside class definition
    void printname(); //  Function prototype in the class definition

    // Printid is defined inside class definition
    void printid() { cout << "Student id is: " << id; }
};

// Definition of printname using SCOPE RESOLUTION OPERATOR
// ::
// className --> resolution operater --> functionName
void student::printname()
{
    cout << "Student name is: " << stname;
}

int main()
{

    student st1;
    st1.stname = "xyz";
    st1.id = 15;

    // call printname()
    st1.printname();
    cout << endl;

    // call printid()
    st1.printid();

    return 0;
}
