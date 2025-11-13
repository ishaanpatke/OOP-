#include <iostream>
#include <string>
using namespace std;


template <class T>
T Square(T x) {
    return x * x;
}


template <>
string Square(string s) {
    return s + s;  
}

int main() {
    cout << "Square of 5: " << Square(5) << endl;
    cout << "Square of 2.5: " << Square(2.5) << endl;
    cout << "Square of string: " << Square(string("Hi ")) << endl;
    return 0;
}
