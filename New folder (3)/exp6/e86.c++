#include <iostream>
using namespace std;

class ClgStudent {
protected:
    string clgcode;
};

class Test : virtual public ClgStudent {
protected:
    int perc;
};

class Sports : virtual public ClgStudent {
protected:
    int sscore;
};

class Result : public Test, public Sports {
public:
    void accept() {
        cout << "Enter college code: ";
        cin >> clgcode;

        cout << "Enter percentage: ";
        cin >> perc;

        cout << "Enter sports score: ";
        cin >> sscore;
    }

    void display() {
        cout << "\n--- Student Result ---\n";
        cout << "College Code: " << clgcode << endl;
        cout << "Percentage: " << perc << endl;
        cout << "Sports Score: " << sscore << endl;
    }
};

int main() {
    Result r1;

    r1.accept();
    r1.display();

    return 0;
}
