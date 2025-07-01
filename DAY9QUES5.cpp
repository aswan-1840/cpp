#include <iostream>
using namespace std;
int main() {
    int number = 468317,lastDigit;
    int evenSum = 0,oddSum= 0;
    while (number > 0) {
        lastDigit = number % 10;
        if(lastDigit % 2 == 0){
            evenSum = evenSum + lastDigit;
        }
        else{
            oddSum = oddSum + lastDigit;
        }

        number = number/10;
                 
    }

    cout <<evenSum<<endl<<oddSum;
}