#include <iostream>
using namespace std;

class Sum {
private:
    int num, sum;

public:

    // Default Constructor
    Sum() {
        num = 6;
        sum = 0;
        for (int i = 0; i < num; i++) {
            sum = sum + i;
        }
        cout << "Sum of numbers (0 to 5) = " << sum << endl;
    }

    // Parameterized Constructor
    Sum(int n) {
        num = n;
        sum = 0;
        for (int i = 0; i < num; i++) {
            sum = sum + i;
        }
        cout << "Sum of " << num << " numbers = " << sum << endl;
    }

    // Copy-like Constructor
    Sum(Sum &t) {
        num = t.num;
        sum = t.sum;
        cout << "Copied sum = " << sum << endl;
    }
};

int main() {
    Sum s1;       // calls default constructor
    Sum s2(34);   // calls parameterized constructor
    Sum s3(s2);   // calls copy constructor

    return 0;
}
