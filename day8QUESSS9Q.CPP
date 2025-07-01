#include <iostream>
using namespace std;
int main() {
    int number = 11;
    bool isPrime = true;

    for( int i = 2 ; i < number;i++){

        if(number % i == 0){
            isPrime = false;
            break;

        }


    }

    if(isPrime == true){
        cout << "Entered number is a prime";

    }
    else{
        cout << "Entered number is not prime";
    }




                
}