
// RETURNING OBJECT AS ARGUMENT

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

// Return Type (Rectangle): Specifies that the function
// returns an object of type Rectangle.

// Function to create and return a Rectangle object
Rectangle createRectangle(int l, int w)
{
    Rectangle a;  // Create a local Rectangle object
    a.length = l; // Set the length
    a.width = w;  // Set the width
    return a;     // Return the Rectangle object
}

int main()
{
    // Call the function to create a new Rectangle object
    Rectangle r1 = createRectangle(7, 3); // object not created hrere

    cout << "Length: " << r1.length << ", Width: " << r1.width << endl;

    cout << "Area: " << r1.area() << endl; // Output: Area: 21

    return 0;
}
