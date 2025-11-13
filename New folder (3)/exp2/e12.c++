#include <iostream>
using namespace std;

class City {
private:
    string name;
    int population;

public:
    void accept() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }

    void display() {
        cout << "City Name: " << name << ", Population: " << population << endl;
    }

    int getPopulation() {
        return population;
    }

    string getName() {
        return name;
    }
};

int main() {
    int n;
    cout << "Enter number of cities: ";
    cin >> n;

    City c[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for City " << i + 1 << ":\n";
        c[i].accept();
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (c[i].getPopulation() > c[maxIndex].getPopulation()) {
            maxIndex = i;
        }
    }

    cout << "\nCity with the highest population:\n";
    c[maxIndex].display();

    return 0;
}
