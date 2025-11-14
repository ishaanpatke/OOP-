#include <iostream>
#include <fstream>
#include <cctype>  // for isdigit() and isspace()
using namespace std;

int main() {
    ifstream file("First.txt");  // open file for reading

    if (!file) {
        cout << "Error: Cannot open First.txt" << endl;
        return 1;
    }

    char c;
    int digits = 0, spaces = 0;

    while (file.get(c)) {  // read character by character
        if (isdigit(c))
            digits++;
        if (isspace(c))
            spaces++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    file.close();

    return 0;
}
