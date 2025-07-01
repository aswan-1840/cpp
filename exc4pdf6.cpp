#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter the number";
    cin >> number;

    switch(number) {
        case 1:
            cout << "add";
            break;
        case 2:
            cout << "substract";
            break;
        case 3:
            cout << "multiply";
            break;
        case 4:
            cout << "exit";
            break;
        default :
            cout << "invalid";
    }
    
}