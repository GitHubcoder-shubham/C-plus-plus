
// Protected access modifier
// The protected access modifier is similar to the private
/* The class members declared as Protected can be accessed
   by any subclass (derived class) of that class as well.  */

#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
protected:
    int id_protected; // protected data members
};

// SUB class or Derived class from public base class
/* Derived class (Child) that inherits publicly from
   the base class (Parent)                           */
class Child : public Parent
{
public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class
        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

int main()
{

    Child ch1;

    // member function of the derived class can
    // access the protected data members of the base class

    ch1.setId(81);
    ch1.displayId();
    return 0;
}
