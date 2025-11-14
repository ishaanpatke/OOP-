#include <iostream>
using namespace std;

class Area {
public:

    // Area of a square
    void area(int x) {
        int a = x * x;
        cout << "The area of the lab is " << a << endl;
    }

    // Area of a rectangle
    void area(float b, float h) {
        float a = b * h;
        cout << "The area of the classroom is " << a << endl;
    }
};

int main() {
    Area a1;

    a1.area(5);              // calls int version
    a1.area(3.5, 23.5);      // calls float version

    return 0;
}
