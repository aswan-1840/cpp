#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number > 10 && number %2 ==0 ){
        cout << "number is greater than 10 and even";
    }
    else{
        cout << "not greater than 10 and not even";
    }
    return 0;

}