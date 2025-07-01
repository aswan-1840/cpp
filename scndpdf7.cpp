#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age";
    cin >> age;

    bool hasLicense = true;//license illa


    if(!age >= 18 &&  hasLicense == true){
        cout << "the person can drive and have a valid licence";
    }
    else{
        cout << "person cannot drive and not have a valid licence";
        
    }
    return 0;
