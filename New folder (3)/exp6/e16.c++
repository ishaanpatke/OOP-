#include <iostream>
using namespace std;

class Person {
protected:
    string pname;
    int page;
};

class Student : protected Person {
private:
    int rollnumber;

public:
    void accept() {
        cout << "Enter Name: ";
        cin >> pname;

        cout << "Enter Age: ";
        cin >> page;

        cout << "Enter Roll Number: ";
        cin >> rollnumber;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << pname << endl;
        cout << "Age: " << page << endl;
        cout << "Roll Number: " << rollnumber << endl;
    }
};

int main() {
    Student s1;
    s1.accept();   // input
    s1.display();  // output

    return 0;
}
