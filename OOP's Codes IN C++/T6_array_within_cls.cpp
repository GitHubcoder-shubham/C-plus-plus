
// ARRAY WITHIN CLASS
// Array can be declared as the members of class

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int scores[5];  // DECLARING ARRAY INSIDE CLASS

public:
    Student(string n, int s[]) {
        name = n;
        for (int i = 0; i < 5; ++i) {
            scores[i] = s[i];
        }
    }

    // Member function to display student information
    void displayInfo() {
        cout << "Student: " << name << endl;
        cout << "Scores: ";
        for (int i = 0; i < 5; ++i) {
            cout << scores[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int scores[] = {90, 85, 78, 92, 88};
    Student student("Shubham", scores);
    student.displayInfo();

    return 0;
}
