#include <iostream>
using namespace std;
int main() {
    int num,sum=0,lastdigit;
    cout << "enter your number";
    cin >> num;
    while(num > 0) {
        lastdigit = num %10;
        sum = sum + lastdigit;
        num = sum/10;

    }
    cout <<sum;


}