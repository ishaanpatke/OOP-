#include <iostream>
using namespace std;

class Book {
private:
    string bookTitle;
    string authorName;
    float price;

public:
    void accept() {
        cout << "Enter book title: ";
        cin >> bookTitle;

        cout << "Enter author's name: ";
        cin >> authorName;

        cout << "Enter book price: ";
        cin >> price;
    }

    void display() {
        cout << "\n--- Book Details ---\n";
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1;

    b1.accept();
    b1.display();

    return 0;
}
