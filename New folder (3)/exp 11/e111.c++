#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MyVector {
    vector<T> v;  // internal vector to hold elements

public:
    // Add a value
    void add(T val) {
        v.push_back(val);
    }

    // Change value at a given index
    void change(int i, T val) {
        if (i >= 0 && i < v.size())
            v[i] = val;
        else
            cout << "Invalid index!\n";
    }

    // Multiply all elements by a number
    void multiply(T num) {
        for (int i = 0; i < v.size(); i++) {
            v[i] = v[i] * num;
        }
    }

    // Display all elements
    void show() {
        cout << "(";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i < v.size() - 1)
                cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main() {
    MyVector<int> m;

    m.add(10);
    m.add(20);
    m.add(30);

    cout << "Initial vector: ";
    m.show();

    m.change(1, 25); // change 2nd element (index 1) to 25
    m.multiply(2);   // multiply all elements by 2

    cout << "Modified vector: ";
    m.show();

    return 0;
}
