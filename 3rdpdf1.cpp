#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number %2 == 0) {
        cout << "the number is even";
    }
    else{
        cout << "number is odd";
    }
    return 0;
}