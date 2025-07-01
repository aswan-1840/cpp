#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "enter your mark";
    cin >> mark;
    if(mark >= 90) {
        cout << "grade  a";
    } 
    else if(mark >= 75 && mark <= 89) {
        cout << "grade  b";
    }
    else if(mark >= 50 && mark <= 74) {
        cout << "grade  c";
    }
    else{
        cout << "grade  F";
    }
    return 0;

}