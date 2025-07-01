#include <iostream>
using namespace std;
int main() {
    int number,sum = 0,lastDigit;
    cout<<"enter your number";
    cin >> number;
   while(number > 0){

lastDigit = number % 10;
sum = sum + lastDigit;
number = number/10;




   }

   cout <<sum;
}