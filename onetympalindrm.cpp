#include<iostream>
using namespace std;
int main() {
    int number,lastdigit;
    int reversed = 0;
    cout <<"enter your number";
    cin >>number;
    int original = number;
    while(number > 0) {
        lastdigit = number % 10;
        reversed = reversed * 10 + lastdigit;
        number = number / 10;

    }
    if(original == reversed) {
        cout << "enetred number is palindrome";
    }
    else{
        cout << "entered number is not palindrome";
    }
}