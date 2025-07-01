#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout << "enter two numbers";
    cin >> a >> b;
    if(a > b) {
        
        cout <<"Largest number is " << a;
    
    
    }

    else if (b >a){
        cout << "largest number is " << b;
    }

    else{
        cout << a <<" and " <<b <<" are equal";
    }

    
}