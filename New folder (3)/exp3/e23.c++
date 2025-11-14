#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    float percentage;

    void accept(int rollno, float percentage) {
        this->rollno = rollno;
        this->percentage = percentage;
    }

    void display() {
        cout << "Your Roll No = " << rollno << endl;
        cout << "Your Percentage = " << percentage << endl;
    }
};

int main() {
    Student s;
    int roll;
    float perc;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter percentage: ";
    cin >> perc;

    s.accept(roll, perc);
    s.display();

    return 0;
}
