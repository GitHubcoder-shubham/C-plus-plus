
// STAIC DATA MEMBERS

#include <iostream>
using namespace std;

class Counter
{
public:
    static int count; // Declaration of static data member

    static void incrementCount()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Count: " << count << endl;
    }
};

// Definition and initialization of static data member
int Counter::count = 0;

int main()
{   
    Counter obj1;
    Counter::incrementCount(); // increment 1 obj.
    // Accessing using Class Name and Scope Resolution Operator
    cout << Counter::count << endl;

    Counter obj2;
    Counter::incrementCount(); // increment 2 obj.
    // Accessing through Objects
    cout << obj2.count << endl;

    Counter::incrementCount(); // increment 3 obj.
    Counter obj3;

    Counter::displayCount(); // Final Output: Count: 3

    return 0;
}
