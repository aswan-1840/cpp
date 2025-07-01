#include <iostream>
using namespace std;
int main() {
    int number= 7;
    int factorial =1;

    for(int i = 1;i <= number;i++) {
        factorial = factorial * i;

    }
    cout << "factorial of,"<<number<<"is,"<<factorial;
}