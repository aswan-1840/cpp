#include <iostream>
using namespace std;
int main() {
    int daynumber;
    cout << "enter your daynumber,";
    cin >> daynumber;

    switch(daynumber) {
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thursday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "satuarday";
            break;
        default:
            cout << "invalid daynumber";
            
        
        return 0;
    }
}