#include <iostream>
using namespace std;

class Number {
    int n = 10;        // default value

public:
    void display() {
        cout << "Number = " << n << endl;
    }

    // Unary minus using member function
    void operator - () {
        n = -n;
    }

    // Unary minus using friend function
    friend void operator - (Number &obj);
};

// Friend function definition
void operator - (Number &obj) {
    obj.n = -obj.n;
}

int main() {
    Number n1;

    cout << "Original value:\n";
    n1.display();

    -n1;  // calls unary minus (member version)
    cout << "After unary minus (member function):\n";
    n1.display();

    -n1;  // calls friend function
    cout << "After unary minus (friend function):\n";
    n1.display();

    return 0;
}
