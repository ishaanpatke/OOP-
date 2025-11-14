#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default constructor
    Student() {
        roll = 5;
        name = "Arin";
    }

    // Constructor with only roll number
    Student(int a) {
        roll = a;
        name = "Ain";
    }

    // Constructor with roll number + name
    Student(int a, string n) {
        roll = a;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s1;                // default constructor
    Student s2(10);            // roll only
    Student s3(13, "Malhar");  // roll + name

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
