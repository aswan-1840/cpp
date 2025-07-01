#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "enter your three numbers";
    cin >>a >> b >> c;
    if(a == b && a == c) {
        cout << "equilateral";
    }
    else if(a == b || a == c || b== a || b == c) {
        cout << "isoscelses";
    }
    else{
        cout << "scalne";
    }
}