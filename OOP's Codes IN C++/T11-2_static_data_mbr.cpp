

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id :";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "Employee ID :" << id << endl;
        cout << "Employee Number :" << count << endl;
    }

    static void getCount()
    {
        // cout<<id; // throws an error
        cout << "Value of count :" << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee E1, E2, E3;
    // E1.id = 1;
    // E2.count=1; // cannot do this as id and count are private

    E1.setData();
    E1.getData();
    Employee::getCount();

    E2.setData();
    E2.getData();
    Employee::getCount();

    E3.setData();
    E3.getData();
    Employee::getCount();

    return 0;
}


