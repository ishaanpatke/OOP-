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

    string word, search;
    int count = 0;

    cout << "Enter word to search: ";
    cin >> search;

    while (file >> word) {  // read each word from file
        if (word == search) {
            count++;
        }
    }

    cout << "Word '" << search << "' found " << count << " times." << endl;

    file.close();
    return 0;
}
