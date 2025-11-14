#include <iostream>
using namespace std;

class Academic {
protected:
    string name;
    int roll;
    int m1, m2, m3;   // academic marks
};

class Sports {
protected:
    int s1;          // sports marks
};

class Result : protected Academic, protected Sports {
private:
    float perc;
    int total;

public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll no: ";
        cin >> roll;

        cout << "Enter m1: ";
        cin >> m1;

        cout << "Enter m2: ";
        cin >> m2;

        cout << "Enter m3: ";
        cin >> m3;

        cout << "Enter sports marks: ";
        cin >> s1;
    }

    void calc() {
        total = m1 + m2 + m3 + s1;
        perc = total / 4.0;
    }

    void display() {
        cout << "\n--- RESULT ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;

        cout << "Marks m1: " << m1 << endl;
        cout << "Marks m2: " << m2 << endl;
        cout << "Marks m3: " << m3 << endl;

        cout << "Sports Marks: " << s1 << endl;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << perc << endl;
    }
};

int main() {
    Result r;

    r.accept();
    r.calc();
    r.display();

    return 0;
}
