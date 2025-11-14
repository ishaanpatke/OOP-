#include <iostream>
using namespace std;

// Template function to add all elements of an array
template <class T>
T addAll(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a[3] = {1, 2, 3};
    double b[3] = {1.1, 2.2, 3.3};

    cout << "Sum of int array: " << addAll(a, 3) << endl;
    cout << "Sum of double array: " << addAll(b, 3) << endl;

    return 0;
}
