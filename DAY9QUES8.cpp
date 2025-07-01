#include <iostream>
using namespace std;
int main() {
    // int number,lastDigit;
    // int reversed = 0;
    // cout << "enter your number";
    // cin >>number;
    // int original =number;
    // while(number > 0) {

    //     lastDigit = number % 10;
    //     reversed = reversed * 10 + lastDigit;
    //     number = number /10;

    // }

    // if(original == reversed){
    //     cout <<"Enetred number is palindrome";
    // }
    // else{
    //     cout <<"Not a palindrome";
    // }

    int number,lastDigit,reversed = 0;
    cout << "Enter ur number";
    cin >> number;
    int original = number;


    while(number > 0){

        lastDigit = number % 10;
        reversed = reversed * 10 + lastDigit; 
        number = number /10; 
        
    }

    

    if(original== reversed){
        cout << "Entered number is Palindrome";
    }
    else{
        cout << "Not a palindrome";
    }
}

