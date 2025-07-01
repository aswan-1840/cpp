#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter your number";
    cin >> number;
    if(!(number > 0)){ 
        cout << "Number is negative";
    }
    else{
        cout << "Number is positive";
    }


}