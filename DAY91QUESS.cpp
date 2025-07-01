#include <iostream>
using namespace std;
int main() {
    int number = 9876;
    int digit = 0;
     while(number > 0) {
        digit = number % 10;
        number = number / 10;
        cout <<digit;
     }
}