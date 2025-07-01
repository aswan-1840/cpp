#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age";
    cin >> age;
    if(age <= 18 || age >= 50) {
        cout << "the customer have 10% discount";
    }
    else{
        cout << "the person have does not 10% discount";
    }
    return 0;
    

    
    
}