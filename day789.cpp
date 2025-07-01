#include <iostream>
using namespace std;
int main() {
    float a,b;
    char op;
    cout << "enter the first number";
    cin >> a;
    cout << "enter the operator";
    cin >> op;
    cout << "enter the second number";
    cin >> b;

    switch(op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        default:
            cout << "invalid";

    }


}