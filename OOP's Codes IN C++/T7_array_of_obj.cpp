

// ARRAY OF OBJECT

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

int main() {

    // This is an array of objects having
    // maximum limit of 3 people
    // Upto 3 people data can be saved
    Person people[3];

    // Initialize objects
    people[0].name = "Alice";
    people[0].age = 25;
    people[1].name = "Bob";
    people[1].age = 30;
    people[2].name = "Charlie";
    people[2].age = 35;

    // Access and print information
    cout << people[0].name << " is " << people[0].age << " years old." << endl;
    cout << people[1].name << " is " << people[1].age << " years old." << endl;
    cout << people[2].name << " is " << people[2].age << " years old." << endl;

    return 0;
}


// storing data of ONE EMPLOYEE

/* 

#include <iostream>
using namespace std;

class Employee
{
    int id;
    char name[30];

public:
    void getdata();
    void putdata();
};

void Employee::getdata()
{
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}

void Employee::putdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}

int main()
{
    Employee emp; // One member

    emp.getdata();
    emp.putdata();

    return 0;
} 

*/


/* 

// What if there is a requirement to add data of more
// than one Employee

#include <iostream>
using namespace std;

class Employee
{
    int id;
    char name[30];

public:
    void getdata();
    void putdata();
};

void Employee::getdata()
{
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}

void Employee::putdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}

// Driver code
int main()
{
    // This is an array of objects having
    // maximum limit of 30 Employees
    // Upto 30 emp data can be saved

    Employee emp[30];

    int n, i;
    cout << "Enter Number of Employees - ";
    cin >> n;

    for (i = 0; i < n; i++)
        emp[i].getdata(); // Accessing the function

    cout << "Employee Data - " << endl;

    for (i = 0; i < n; i++)
        emp[i].putdata(); // Accessing the function

    return 0;
}

*/

