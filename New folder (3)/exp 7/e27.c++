#include <iostream>
using namespace std;

class Calculate {
public:

    // Add many integers
    void calc(int x, int y, int b, int c, int m, int j, int r, int t, int n, int i) {
        int a = x + y + b + c + m + j + r + t + n + i;
        cout << "The total of the integers is " << a << endl;
    }

    // Add many float values
    void calc(float q, float w, float c, float y, float o) {
        float a = q + w + c + y + o;
        cout << "The total of the floating point values is " << a << endl;
    }
};

int main() {
    Calculate c1;

    c1.calc(5, 3, 4, 6, 7, 8, 4, 2, 5, 3);
    c1.calc(5.5, 3.2, 4.1, 6.7, 7.8);

    return 0;
}
