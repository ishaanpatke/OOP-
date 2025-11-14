#include <iostream>
using namespace std;

class Book {
public:
    int bid;
    string bname;
    float bprice;

    void accept() {
        cout << "Enter book ID: ";
        cin >> bid;
        cout << "Enter book name: ";
        cin >> bname;
        cout << "Enter book price: ";
        cin >> bprice;
    }
};

int main() {
    Book b1, b2;

    cout << "Enter the details for Book 1:\n";
    b1.accept();

    cout << "\nEnter the details for Book 2:\n";
    b2.accept();

    cout << "\nBook with greater price is: ";
    if (b1.bprice > b2.bprice)
        cout << b1.bname << endl;
    else if (b2.bprice > b1.bprice)
        cout << b2.bname << endl;
