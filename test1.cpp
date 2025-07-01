#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age";
    cin >> age;
    cout <<age;
    if(age < 18){
        cout << "job is not availible";
    }
    else if(age <= 54){
        cout << "job is availible";
    }
    else if(age <= 57){
        cout << "job is availible, but retirement";
    }
    else 
    cout << "retirement time";

    return 0;

    
    

}