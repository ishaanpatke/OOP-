#include <iostream>
using namespace std;

class Number {
    int n = 10;   // default value

public:
    void display() {
        cout << "n = " << n << endl;
    }

    // Friend function for overloading ++
    friend void operator++(Number &x);
};

// Definition of overloaded ++ operator
void operator++(Number &x) {
    x.n = x.n + 1;   // increment the value
}

int main() {
    Number n1;

    ++n1;          // calling overloaded operator
    n1.display();  // printing result

    return 0;
}
