#include <iostream>
using namespace std;
int main() {
    string a;
    cout << "enter your product :";
    cin >> a;
    if(a=="electronics") {
        cout << "electronics, 500";
    }
    else if(a == "clothing") {
        cout << "clothing,400";
    }
    else if(a == "groceries") {
        cout << "groceries ,100";
    }
    else{
        cout << "invalid";

    }
    return 0;

}