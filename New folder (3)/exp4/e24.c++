#include <iostream>
using namespace std;

class Num1 {
private:
    int numa;

public:
    void read() {
        cout << "Enter num a: ";
        cin >> numa;
    }

    // Friend function declaration
    friend void Greatest(Num1 n1, Num2 n2);
};

class Num2 {
private:
    int numb;

public:
    void read() {
        cout << "Enter num b: ";
        cin >> numb;
    }

    // Friend function declaration
    friend void Greatest(Num1 n1, Num2 n2);
};

// Friend function definition
void Greatest(Num1 n1, Num2 n2) {
    if (n1.numa > n2.numb) {
        cout << "Greatest number is numa = " << n1.numa << endl;
    }
    else if (n2.numb > n1.numa) {
        cout << "Greatest number is numb = " << n2.numb << endl;
    }
    else {
        cout << "Both numbers are equal" << endl;
    }
}

int main() {
