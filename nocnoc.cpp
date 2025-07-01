#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter the number";
    cin >> number;
    if(number % 5 != 0) {
        cout << "the number is divisible";
    }
    else {
        cout << "the number is not divisible";
    }
}