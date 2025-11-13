#include <iostream>
#include <string>
using namespace std;

class Staff {
private:
    int staffNo;
    string name;
    string title;

public:
    void accept() {
        cout << "Enter your staff number: ";
        cin >> staffNo;

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your title: ";
        cin >> title;
    }

    void display() {
        cout << "Welcome " << name << "!" << endl;
        cout << "Your title is: " << title << endl;
    }

    string getTitle() {
        return title;
    }
};

int main() {
    Staff s[5];  // array of 5 staff members

    cout << "Enter details for 5 staff members:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStaff " << i + 1 << ":\n";
        s[i].accept();
    }

    cout << "\nStaff members with title 'HOD':\n";
    for (int i = 0; i < 5; i++) {
        if (s[i].getTitle() == "HOD") {
            s[i].display();
        }
    }

    return 0;
}
