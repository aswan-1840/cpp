#include <iostream>
using namespace std;
int main() {
    int num1,num2,sum=0;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter secound number";
    cin>>num2;
    for(int i = num1; i<num2;i++){
        bool isPrime = true;
         
    for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }

        if(isPrime == true){
            sum = sum + i;
        }
    }
    
    cout<<"sum of prime numbers are "<<sum;
}