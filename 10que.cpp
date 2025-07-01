#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number * 7 || number >= 50) {
        cout << "the one condition is met";
    }
    else {
        cout << "the one condition is not met";
    }
}