#include <iostream>
using namespace std;
int main() {
    int balance,withdrawalamount;
    cout << "enter your balanace and wuithdrawal amount";
    cin >> balance >> withdrawalamount;
    if(balance >= withdrawalamount) {
        cout << "transaction succesful";
    }
    else{
        cout << ":insufficient bank balance";
    }
    return 0;

}