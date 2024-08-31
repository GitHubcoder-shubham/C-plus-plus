
// FUNCTION OVERLOADING

/*
// Parameters should have a different type
// add(int a, int b)
// add(double a, double b)

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

int main()
{
    add(10, 2);
    add(5.3, 6.2);

    return 0;
}
*/

/*
// Parameters should have a different number
// add(int a, int b)
// add(int a, int b, int c)

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b);
}

void add(int a, int b, int c)
{
    cout << endl << "sum = " << (a + b + c);
}

int main()
{
    add(10, 2);
    add(5, 6, 4);

    return 0;
}
*/

/* 
// Parameters should have a different sequence of parameters.
// add(int a, double b)
// add(double a, int b)

#include <iostream>
using namespace std;

void add(int a, double b)
{
    cout << "sum = " << (a + b);
}

void add(double a, int b)
{
    cout << endl << "sum = " << (a + b);
}

int main()
{
    add(10, 2.5);
    add(5.5, 6);

    return 0;
} 
*/

// MORE EXAMPLE

#include <iostream>
using namespace std;

void print(int i) {
  cout << " Here is int " << i << endl;
}
void print(double  f) {
  cout << " Here is float " << f << endl;
}
void print(char const *c) {
  cout << " Here is char* " << c << endl;
}

int main() {
  print(10);
  print(10.10);
  print("ten");
  return 0;
} 

