#include <iostream>
using namespace std;
int main() {
    int number = 11;
    bool isprime = true;

    for(int i =2;i <= number;i++) {
        
        if(number % 1 == 0) {
            isprime = false;
            break;
        }
    } 
    if(isprime == true) {
        cout << "entered number is prime";
    }
    else{
        cout << "enetred number is not prime";
    }
}