#include <iostream>
using namespace std;
int main() {
     int balance,withdrawalAmount;
    cout << "enter your balanace and withdrawal amount";
    
    cin >> balance>>withdrawalAmount;

    if(balance>=withdrawalAmount){
        cout << "transaction succesful";

    } 
     else{
        cout << "insufficient balance";
     }
     return 0;
    

   
}




