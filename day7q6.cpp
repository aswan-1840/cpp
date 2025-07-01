#include <iostream>
using namespace std;
int main() {
    int bill;
    cout << "enter your bill amount";
    cin >> bill;
    if(bill >= 100) {
        
        cout << "5 per unit";
    }
    else if(bill >= 101 && bill <= 300) {
        cout << "7 per unit";

    }
    else {
        cout << "10 per unit";
    }
}