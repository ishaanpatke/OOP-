#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("First.txt");   // Input file
    ofstream out("Second.txt"); // Output file

    if (!in) {
        cout << "Error: Cannot open First.txt" << endl;
        return 1;
    }

    if (!out) {
        cout << "Error: Cannot create Second.txt" << endl;
        return 1;
    }

    char ch;
    while (in.get(ch)) {
        out.put(ch);
    }

    cout << "File copied successfully!" << endl;

    in.close();
    out.close();

    return 0;
}
