#include <iostream>
using namespace std;
int main() {
    char symbol;
    cout << "enter your words";
    cin >> symbol;
    switch('symbol') {
        case 'a':
            cout << "vowels";
            break;
        case 'h':
            cout << "consonant";
            break;
        case '5':
            cout << "digit";
            break;
        case ',':
            cout << "special characters";
            break;
        

        return 0;
    }
}