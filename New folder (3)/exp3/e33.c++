#include <iostream>
using namespace std;

class OuterClass {
public:
    void display() {
        cout << "This text is from the outer class" << endl;
    }

    // Inner Class
    class InnerClass {
    public:
        void display_in() {
            cout << "This text is from the inner class" << endl;
        }
    };
};

int main() {
    OuterClass o1;
    o1.display();

    // Creating inner class object
    OuterClass::InnerClass i;
    i.display_in();

    return 0;
}
