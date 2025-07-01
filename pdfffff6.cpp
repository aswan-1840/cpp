#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    char operato;
    cout << "enter first number";
    cin >> num1;
    cout << "enter second number";
    cin >> num2;
    cout << "enter the operator";
    cin >> operato;

    switch(operato){
        case ('+'):
            cout << num1 + num2;
            break;
        case ('-'):
            cout << num1 - num2;
            break;
        case ('/'):
            cout << num1 / num2;
            break;
        case ('*'):
            cout << num1 * num2;
            break;

        return 0;
        
    }
} 

