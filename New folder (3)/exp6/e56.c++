#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand, model;
};

class ElectricCar : public Vehicle {
protected:
    string type;
};

class FinalCar : public ElectricCar {   // final class derived from ElectricCar
private:
    int batteryCap;

public:
    void accept() {
        cout << "Enter brand name: ";
        cin >> brand;

        cout << "Enter model name: ";
        cin >> model;

        cout << "Enter type of car: ";
        cin >> type;

        cout << "Enter battery capacity: ";
        cin >> batteryCap;
    }

    void display() {
        cout << "\n--- Car Details ---\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Type: " << type << endl;
        cout << "Battery Capacity: " << batteryCap << endl;
    }
};

int main() {
    FinalCar e1;

    e1.accept();
    e1.display();

    return 0;
}
