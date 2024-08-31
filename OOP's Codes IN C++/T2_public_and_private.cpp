

// Public access modifier
// C++ program to demonstrate Public

#include <iostream>
using namespace std;

// class definition
class Circle
{
public:
    float r;    // Data member radius is declared as public

    float cal_area()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Circle c1;

    // Accessing public datamember Outside class
    c1.r = 5.5;

    cout << "Radius is: " << c1.r << "\n";
    cout << "Area is: " << c1.cal_area();
    return 0;
}


/* 

// Private access modifier
// C++ program to demonstrate Private

#include <iostream>
using namespace std;

// class definition
class Circle
{
private:
    float r; // Data member radius is declared as Private

public:
    float cal_area()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Circle c1;

    // Accessing Private datamember Outside class
    // ERROR WILL BE GIVEN --> c1.r
    c1.r = 5.5;

    // HERE ALSO ERROR WILL BE GIVEN --> c1.r
    cout << "Radius is: " << c1.r << "\n";
    cout << "Area is: " << c1.cal_area();
    return 0;
} 

*/
