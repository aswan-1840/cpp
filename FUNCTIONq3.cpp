#include <iostream>
using namespace std;

int max(int a,int b) {
    if(a > b){
        return a;
    }
    else{
        return b;
    }

    
}
int main() {
    cout << max(7 , 5);
}