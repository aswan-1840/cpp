#include <iostream>
using namespace std;
int main() {
    int number,largestdigit=0,lastDigit;
    cout << "enter the number";
    cin>>number; 

    while(number > 0){

        lastDigit = number % 10;

        if(lastDigit > largestdigit) { 
            largestdigit = lastDigit;

    }

    number = number /10; 
   
    
}

cout << "largest digit is " << largestdigit;
}