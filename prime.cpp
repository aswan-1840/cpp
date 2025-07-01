#include <iostream>
using namespace std;
int main() {
    int number =35;
    bool isprime = true;

    for(int i = 2;i <= number;i++) {
        if(number % 2 == 0) {
            isprime = false;
            break;
        }
    }
    if(isprime == true) {
        cout << "enterd number is true";
    }
    else{
        cout <<"entered number is not prime";
    }

}