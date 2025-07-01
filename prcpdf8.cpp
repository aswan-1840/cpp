#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter the number";
    cin >> number;
    if((number >= 1 && number <=100) || number < 0){
        cout << "number is between 100 and negative";
    }
    else {
        cout << "Outside the range";
    }
}