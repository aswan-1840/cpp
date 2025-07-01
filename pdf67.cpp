#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(number % 5==0)  {
        cout << "the number is divisible by 5";

    }
    else{
        cout << "the number is not dividible by 5 ";
    }
    return 0;
}
