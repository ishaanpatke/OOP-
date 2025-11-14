#include <iostream>
using namespace std;

class Clg {
    int roll;
    string name;
    string course;

public:
    Clg(int a, string b, string c = "CSE") {
        roll = a;
        name = b;
        course = c;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Clg c1(40, "Ishaan");
    Clg c2(24, "Arnau");

    c1.display();
    cout << endl;
    c2.display();

    return 0;
}
