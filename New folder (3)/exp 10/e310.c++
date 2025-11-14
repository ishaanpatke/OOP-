#include <iostream>
using namespace std;

template <class T>
class Calc {
    T a, b;

public:
    // Constructor to set values
    Calc(T x, T y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "The sum is: " << a + b << endl;
    }

    void sub() {
        cout << "The difference is: " << a - b << endl;
    }

    void mul() {
        cout << "The product is: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "The quotient is: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    void remainder() {
        if constexpr (is_integral<T>::value)  // Works only for int types
            cout << "The remainder is: " << a % b << endl;
        else
            cout << "Remainder not supported for non-integer types." << endl;
    }
};

int main() {
    int x, y, choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calc<int> c(x, y);

    cout << "\nChoose an operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Remainder\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            c.add();
            break;
        case 2:
            c.sub();
            break;
        case 3:
            c.mul();
            break;
        case 4:
            c.divide();
            break;
        case 5:
            c.remainder();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
