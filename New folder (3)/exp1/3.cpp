#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;          // hours, minutes, seconds
    int totalSeconds;

public:
    void accept() {
        cout << "Enter the time (hours minutes seconds): ";
        cin >> h >> m >> s;
    }

    void calcSeconds() {
        totalSeconds = h * 3600 + m * 60 + s;
        cout << "The total time in seconds is: " << totalSeconds << endl;
    }
};

int main() {
    Time t1;
    t1.accept();
    t1.calcSeconds();
    return 0;
}
