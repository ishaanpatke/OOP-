#include <iostream>
using namespace std;

class Account {
private:
    int accountNo;

public:
    double balance;
    double updatedBalance;

    void accept() {
        cout << "Enter your account number: ";
        cin >> accountNo;
        cout << "Enter your balance: ";
        cin >> balance;
    }

    void update() {
        if (balance >= 5000)
            updatedBalance = balance + (balance * 0.10); // add 10% interest
        else
            updatedBalance = balance;
    }

    void display() {
        cout << "Updated balance for account " << accountNo << " is: " << updatedBalance << endl;
    }
};

int main() {
    Account a[5]; // array of 5 accounts

    cout << "Enter details for 5 accounts:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        a[i].accept();
    }

    cout << "\nUpdating balances...\n";
    for (int i = 0; i < 5; i++) {
        a[i].update();
    }

    cout << "\nDisplaying updated balances:\n";
    for (int i = 0; i < 5; i++) {
        a[i].display();
    }

    return 0;
}

