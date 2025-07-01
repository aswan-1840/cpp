#include <iostream>
using namespace std;
int main() {
    int a,b,nextTerm,number;
    cout <<"enter Limit:";
    cin>>number;

    a = 0;
    b = 1;
    for(int i = a;i < number;i++) {
        cout << a <<" ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
    }
 
    
}