#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number >= 10 && number <= 50) {
        cout << "you are a batman";
    }
    else{
        cout << "not a batman";
    }
    return 0;


}