#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;

    switch(number) {
        case 1:
            cout << "one";
            break;
        case 9:
            cout << "nine";
            break;
        case 0:
            cout << "zero";
            break;
    }
}