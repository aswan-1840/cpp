#include <iostream>
using namespace std;
int main() {
    char x;
    cout << "enter your chareter(r,y,g) ";
    cin >> x;

    switch(x) {
        case 'r':
            cout << "stop signal";
            break;
        case 'y':
            cout << "go slow signal";
            break;
        case 'g':
            cout <<"go signal";
            break;
        default:
             cout<<"error";
             break;    

        return 0;
    }
}