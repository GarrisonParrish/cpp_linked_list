#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Sup gurlll here's ur number: " << a << endl;
    // Any num in range
    int x, y, z;
    cout << "\"something new\"" << endl;
    cout << "any nonnegative random integer: " << endl;
    x = rand();
    cout << x << endl;
    // Limiting range of randoms
    cout << "random int with an upper bound: " << endl;
    y = rand() % 100;  // 100 = maximum number now, otherwise it will "loop"
    cout << y << endl;
    // Limit max and min
    cout << "random int with upper and lower bounds: " << endl;
    z = rand() % 100 + 60;  // 100 = max, 60 = min
    cout << z << endl;
    // Note: these are not uniformly likely outcomes: lower numbers more likely to occur
    // How to get a truly random number in a range?
    return 0;
}