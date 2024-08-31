
/* Access the private data members of a class indirectly
   using the public member functions of the class        */

#include <iostream>
using namespace std;

class Circle
{
private:
    float r; // private data member

public:
    void cal_area(float R) // public member function
    {
        // member function can access private data member radius
        r = R;
        float area = 3.14 * r * r;

        cout << "Radius is: " << r << endl;
        cout << "Area is: " << area;
    }
};

int main()
{
    // creating object of the class
    Circle c1;

    // Trying to access Private data member
    // directly outside the class
    c1.cal_area(1.5);

    return 0;
}
