#include <iostream>
using namespace std;

class Marks1 {
public:
    float marks1;

    void readMarks() {
        cout << "Enter marks for Result 1: ";
        cin >> marks1;
    }
};

class Marks2 {
public:
    float marks2;

    void readMarks() {
        cout << "Enter marks for Result 2: ";
        cin >> marks2;
    }
};

void average(Marks1 m1, Marks2 m2) {
    float avg = (m1.marks1 + m2.marks2) / 2;
    cout << "Average = " << avg << endl;
}

int main() {
    Marks1 m1;
    Marks2 m2;

    m1.readMarks();
    m2.readMarks();

    average(m1, m2);

    return 0;
}
