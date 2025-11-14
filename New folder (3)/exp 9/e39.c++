#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("First.txt");  // open the file

    if (!file) {
        cout << "Error: Cannot open First.txt" << endl;
        return 1;
    }

    string word;
    int count = 0;

    while (file >> word) {  // read word by word
        count++;
    }

    cout << "Total words: " << count << endl;

    file.close();
    return 0;
}
