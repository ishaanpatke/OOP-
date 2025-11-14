#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
};

// Student derived from Person
class Student : public Person {
protected:
    int rollno;
};

// Sports data
class Sports {
protected:
    int s1;
};

// Academics data
class Academics {
protected:
    int m1, m2, m3;
};

// Final class using multiple inheritance
class Result : protected Student, protected Sports, protected Academics {
private:
    int total;

public:
    void accept() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter roll no: ";
        cin >> rollno;

        cout << "Enter Sports score: ";
        cin >> s1;

        cout << "Enter m1: ";
        cin >> m1;

        cout << "Enter m2: ";
        cin >> m2;

        cout << "Enter m3: ";
        cin >> m3;
    }

    void calc() {
        total = m1 + m2 + m3 + s1;
    }

    void display() {
        cout << "\n--- Result Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Sports Score: " << s1 << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r1;

    r1.accept();
    r1.calc();
    r1.display();

    return 0;
}
