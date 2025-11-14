#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string name;
};

class Manager : protected Employee {
private:
    string department;

public:
    void accept() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your employee ID: ";
        cin >> empID;

        cout << "Enter your department: ";
        cin >> department;
    }

    void display() {
        cout << "\n--- Manager Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << department << endl;
    }
};

class Developer : protected Employee {
private:
    string programmingLanguage;

public:
    void accept() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your employee ID: ";
        cin >> empID;

        cout << "Enter programming language: ";
        cin >> programmingLanguage;
    }

    void display() {
        cout << "\n--- Developer Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main() {
    Manager m;
    Developer d;

    cout << "\nEnter Manager Details:\n";
    m.accept();
    m.display();

    cout << "\nEnter Developer Details:\n";
    d.accept();
    d.display();

    return 0;
}
