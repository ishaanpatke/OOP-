#include <iostream>
using namespace std;

class n1 {
private:
    int a;

public:
    void accept() {
        cout << "Enter first number: ";
        cin >> a;
    }

    friend void greatest(n1 x, n2 y);
};

class n2 {
private:
    int b;

public:
    void accept() {
        cout << "Enter second number: ";
        cin >> b;
    }

    friend void greatest(n1 x, n2 y);
};

// Friend function definition
void greatest(n1 x, n2 y) {
    if (x.a > y.b) {
        cout << "Greater number is: " << x.a << endl;
    }
    else if (y.b > x.a) {
        cout << "Greater number is: " << y.b << endl;
    }
    else {
        cout << "Both numbers are equal" << endl;
    }
}

int main() {
    n1 s;
    n2 r;

    s.accept();
    r.accept();

    greatest(s, r);

    return 0;
}
