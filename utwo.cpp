#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number >= 0 &&  number % 2== 0) {
        cout << "two conditions are both true";
    }
    else {
        cout << "two conditions are not true";
    }
    return 0;
}