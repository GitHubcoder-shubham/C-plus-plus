
// C++ program to illustrate how create a simple class and object

#include <iostream>

using namespace std;

// keyword - User defined Name
class ThisClass
{
public:      // Access Specifier --> public,private or protected
    int var; // Data member

    void print() // Member Function or Method
    {
        cout << "Hello";
    }
}; // ThisClass ends with a semicolon(;)

int main()
{
    // Create an object of the ThisClass class
    // ClassName ObjectName;
    ThisClass c1; // Created using object --> c1

    // Accessing Data Members
    c1.var = 25;
    cout << c1.var << endl;

    // Call the print member function
    // Object.print()
    c1.print();

    return 0;
}
