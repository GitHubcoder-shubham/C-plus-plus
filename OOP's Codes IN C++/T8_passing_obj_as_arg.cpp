
// PASSING AN OBJECT AS AN ARGUMENT
// BOTH CAN BE USED Pass by Value,Passing by Reference

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    // Member function to calculate area
    int area()
    {
        return length * width;
    }
};

// Pass by Value: Creates a copy of the object, so the original object 
// remains unchanged, and there could be a performance cost for copying 
// large objects.
// void printArea(Rectangle a) --> Pass by Value

// Passing by Reference: (Rectangle &a) means that the function operates
// on the actual object, not a copy. This is efficient and allows the
// function to access the original object's data directly.

// Function to print the area of a Rectangle OBJECT PASSED BY REFERENCE

void printArea(Rectangle &a)
{
    cout << "Area: " << a.area() << endl;
}

int main()
{

    Rectangle r1;
    r1.length = 5;
    r1.width = 4;

    printArea(r1); // Output: Area: 20

    return 0;
}
