#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "After pop, top: " << s.top() << endl;

    return 0;
}
