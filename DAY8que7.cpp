#include <iostream>
using namespace std;
int main() {
    int num = 1234;
    int sum = 0;
    int lastDigit;
  while(num > 0){
    lastDigit = num % 10; 
    sum = sum + lastDigit; 
    num = num /10; 


  }
  cout <<sum;



}