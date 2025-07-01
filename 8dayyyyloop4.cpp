#include <iostream>
using namespace std;
int main() {
    int n= 2,factorial=1;
    for(int i=1;i<=n;i++) {
        factorial = factorial *i;
    }
    cout<< "factorial of"<<n<<"is"<<factorial;
}